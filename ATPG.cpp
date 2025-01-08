#include "ATPG.h"

int ATPGEntry(std::vector<Node*> netList, std::vector<std::string> &fullResultVector, std::vector<std::string> &minimizedResultVector) {
    int result = ERROR_NONE, i, j;
    std::string resultStr, tempTag;
    std::vector<ATPGGate*> gateList;
    std::vector<ATPGWire*> wireList, inputWireList, outputWireList;
    std::map<std::string, bool> usedTags;
    std::vector<std::string> tagVector, resultVector;
    if (netList.empty()) { 
        return ERROR_NETLIST_EMPTY;
    }

    result = ATPGTransferNetList(netList, gateList, wireList, inputWireList, outputWireList);
    if (result != ERROR_NONE) {
        return result;
    }

    // For each ATPGWire in the WireList, we need to calculate TVs to propogate the Stuck At Fault of that ATPGWire to the output
    for (i = 0; i < wireList.size(); i++) {
        for (j = 0; j < 2; j++) { 
            result = ATPGCase(wireList.at(i), StuckAtFaultWireState.at(static_cast<StuckAtFault>(j)), inputWireList, outputWireList, resultStr);
            if (result != ERROR_NONE) { 
                return result;
            }
            tagVector.push_back(wireList.at(i)->GetWire()->GetName() + " SAF" + std::to_string(j));
            resultVector.push_back(resultStr);
            resultStr = "";
        }
    }

    // Parse our tagVector and resultVector into the fullResultVector
    for (i = 0; i < tagVector.size(); i++) {
        fullResultVector.push_back(tagVector.at(i) + ":" + resultVector.at(i));
    }

    // Parse our tagVector and resultVector into the minimizedResultVector
    for (i = 0; i < tagVector.size(); i++) { 
        if (usedTags.find(tagVector.at(i)) != usedTags.end()) { 
            continue;
        }
        tempTag = tagVector.at(i);
        // If our tag has not been used, then we need to find all matches to this tag and add them to our tempTags
        for (j = 0; j < tagVector.size(); j++) {
            if (i == j) {
                continue;
            }
            else if (resultVector.at(i) == resultVector.at(j)) { 
                tempTag += ", " + tagVector.at(j);
                usedTags.insert(std::pair<const std::string, const bool>(tagVector.at(j), true));
            }
        }
        minimizedResultVector.push_back(tempTag + ":" + resultVector.at(i));
    }

    ATPGCleanupNetList(gateList, wireList);
    return result;
}

// Parse existing NetList into various GateLists and WireLists used by the ATPG tool
int ATPGTransferNetList(std::vector<Node*> netList, std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<ATPGWire*> &inputWireList, std::vector<ATPGWire*> &outputWireList) {
    int error = ERROR_NONE, i, j;
    Gate* gate;
    Wire* wire;
    ATPGGate* newGate;
    ATPGWire* newWire;
    std::map<int, ATPGGate*> gateMap;
    std::map<int, ATPGWire*> wireMap;
    
    if (netList.empty()) { 
        return ERROR_NETLIST_EMPTY;
    }
    
    // Instantiate ATPGGates and ATPGWires per each Gate and Wire
    for (i = 0; i < netList.size(); i++) { 
        gate = dynamic_cast<Gate*>(netList.at(i));
        if (gate != nullptr) {
            if (gate->GetGateType() == GATETYPE_XOR || gate->GetGateType() == GATETYPE_XNOR || gate->GetGateType() == GATETYPE_UNDEF) { 
                return ERROR_GATETYPE_INVALID_TYPE;
            }
            newGate = new ATPGGate(gate);
            gateList.push_back(newGate);
            gateMap.insert(std::pair<const int, ATPGGate*>(newGate->GetGate()->GetID(), newGate));
            continue;
        }
        wire = dynamic_cast<Wire*>(netList.at(i));
        if (wire != nullptr) { 
            newWire = new ATPGWire(wire);
            wireList.push_back(newWire);
            wireMap.insert(std::pair<const int, ATPGWire*>(newWire->GetWire()->GetID(), newWire));
            if (newWire->GetWire()->GetInputs().empty() && !newWire->GetWire()->GetOutputs().empty()) {
                inputWireList.push_back(newWire);
            }
            else if (!newWire->GetWire()->GetInputs().empty() && newWire->GetWire()->GetOutputs().empty()) {
                outputWireList.push_back(newWire);
            }
            continue;            
        }

        if (gate == nullptr && wire == nullptr) { 
            error = ERROR_NODE_INVALID_TYPE;
        }
    }

    // Link each new ATPGGate and ATPGWire to their respective inputs and outputs corresponding to the original Gates and Wires
    for (i = 0; i < netList.size(); i++) { 
        // For each original Gate, link the corresponding input and output ATPGWires to the corresponding ATPGGate
        gate = dynamic_cast<Gate*>(netList.at(i));
        if (gate != nullptr) {
            newGate = GetATPGGateFromMap(gateMap, gate->GetID());
            if (newGate == nullptr) { 
                continue;
            }

            for (j = 0; j < gate->GetInputs().size(); j++) { 
                newWire = GetATPGWireFromMap(wireMap, gate->GetInputs().at(j)->GetID());
                if (newWire == nullptr) { 
                    continue;
                }
                newGate->ConnectInput(newWire);
            }

            newWire = GetATPGWireFromMap(wireMap, gate->GetOutput()->GetID());
            if (newWire == nullptr) { 
                continue;
            }
            newGate->ConnectOutput(newWire);        
        }

        // For each original Wire, link the corresponding input and output ATPGGates to the corresponding ATPGWire
        wire = dynamic_cast<Wire*>(netList.at(i));
        if (wire != nullptr) { 
            newWire = GetATPGWireFromMap(wireMap, wire->GetID());
            if (newWire == nullptr) { 
                continue;
            }
            
            for (j = 0; j < wire->GetInputs().size(); j++) { 
                newGate = GetATPGGateFromMap(gateMap, wire->GetInputs().at(j)->GetID());
                if (newGate == nullptr) { 
                    continue;
                }
                newWire->ConnectInput(newGate);
            }

            for (j = 0; j < wire->GetOutputs().size(); j++) { 
                newGate = GetATPGGateFromMap(gateMap, wire->GetOutputs().at(j)->GetID());
                if (newGate == nullptr) { 
                    continue;
                }
                newWire->ConnectOutput(newGate);
            }
        }
    }
    return error;
}

// Clear the wire's WireState and recursively clear all outputs of this wire
void ATPGClearWireState(ATPGWire* wire) {
    int i;
    if (wire == nullptr) { 
        return;
    }
    if (wire->GetState() == WIRESTATE_UNDEF) { 
        return;
    }
    wire->SetState(WIRESTATE_UNDEF);
    for (i = 0; i < wire->GetOutputs().size(); i++) { 
        ATPGClearWireState(wire->GetOutputs().at(i)->GetOutput());
    }
}

// Delete all ATPGGates and ATPGWires in an ATPG NetList
void ATPGCleanupNetList(std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<Node*> *originalNetList) {
    for (ATPGGate* gate : gateList) { 
        delete gate;
    }
    gateList.clear();

    for (ATPGWire* wire : wireList) { 
        delete wire;
    }
    wireList.clear();

    if (originalNetList != nullptr) { 
        CleanupNetList(*originalNetList);
    }
    return;
}

// Generate a Test Vector given a Wire and an error value. Write out to result the states of inputWireList and outputWireList
int ATPGCase(ATPGWire* wire, WireState errorVal, std::vector<ATPGWire*> inputWireList, std::vector<ATPGWire*> outputWireList, std::string &result) {
    int error = ERROR_NONE, i;
    std::vector<std::string> inputNames;
    std::vector<std::string> inputStates;
    std::vector<std::string> outputNames;
    std::vector<std::string> outputStates;
    
    // Run the Justify and Propogate for this Test Vector Generation
    error = Justify(wire, errorVal);
    if (error != ERROR_NONE) { 
        return error;
    }
    error = Propogate(wire);
    if (error != ERROR_NONE) { 
        return error;
    }

    // Loop through the results and write to our buffers
    for (i = 0; i < inputWireList.size(); i++) { 
        inputNames.push_back(inputWireList.at(i)->GetWire()->GetName());
        inputStates.push_back(WireStateString.at(inputWireList.at(i)->GetState()));       
    }
    for (i = 0; i < outputWireList.size(); i++) { 
        outputNames.push_back(outputWireList.at(i)->GetWire()->GetName());
        outputStates.push_back(WireStateString.at(outputWireList.at(i)->GetState()));
    }
    
    // Create our result string
    result += "{";
    for (i = 0; i < inputWireList.size(); i++) { 
        result += inputNames.at(i);
    }
    result += "}={";
    for (i = 0; i < inputWireList.size(); i++) { 
        result += inputStates.at(i);
    }
    result += "},{";
    for (i = 0; i < outputWireList.size(); i++) { 
        result += outputNames.at(i);
    }
    result += "}={";
    for (i = 0; i < outputWireList.size(); i++) { 
        result += outputStates.at(i);
    }
    result += "}";

    // Reset ATPGWire states
    for (i = 0; i < inputWireList.size(); i++) { 
        ATPGClearWireState(inputWireList.at(i));
    }
    return error;
}

// Set all inputs to wire to states that allow force the given errorVal
int Justify(ATPGWire* wire, WireState errorVal) { 
    int error = ERROR_NONE, i, j;
    bool controlled = false;
    int controlledIdx = -1;
    if (wire == nullptr) { 
        return ERROR_WIRE_IS_NULL;
    }
    if (wire->GetState() != WIRESTATE_UNDEF && wire->GetState() != errorVal) { 
        return ERROR_STATE_ALREADY_SET;
    }
    // If there are no inputs, we can set the state and exit quickly
    if (wire->GetInputs().empty()) { 
        if (wire->GetState() == errorVal) { 
            return error;
        }
        wire->SetState(errorVal);
        return error;
    }
    
    // If there are inputs, we need to determine what to do based upon GateType and errorVal per input
    for (i = 0; i < wire->GetInputs().size(); i++) { 
        // If the gate is an inverter, it has no control value but can still be justified by special logic
        if (wire->GetInputs().at(i)->GetGateType() == GATETYPE_INV) { 
            error = Justify(wire->GetInputs().at(i)->GetInputs().at(0), WireStateInverted.at(errorVal));
            if (error != ERROR_NONE) { 
                return error;
            }
        }
        // If the current wire is WIRESTATE_DC, all inputs to the gates connected to this wire will be WIRESTATE_DC
        else if (errorVal == WIRESTATE_DC) {
            for (j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
                error = Justify(wire->GetInputs().at(i)->GetInputs().at(j), WIRESTATE_DC);
            }
        }
        // If the ControlledValue is the errorVal, then we force an input to be the control value and all others as WIRESTATE_DC
        else if (GateStateWhileControlled.at(wire->GetInputs().at(i)->GetGateType()) == errorVal) { 
            // First, we need to confirm if a wire is already being controlled.
            for (j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
                if (wire->GetInputs().at(i)->GetInputs().at(j)->GetState() == GateControlVal.at(wire->GetInputs().at(i)->GetGateType())) { 
                    controlled = true;
                    controlledIdx = j;
                }
            }
            // We Justify one gate with the control value (if not already there). Then we Justify the rest with WIRESTATE_DCs
            for (j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
                if (!controlled) {
                    error = Justify(wire->GetInputs().at(i)->GetInputs().at(j), GateControlVal.at(wire->GetInputs().at(i)->GetGateType()));
                    if (error != ERROR_NONE) {
                        return error;
                    }
                    controlled = true;
                    controlledIdx = j;
                }
                else {
                    if (j == controlledIdx) { 
                        continue;
                    }
                    error = Justify(wire->GetInputs().at(i)->GetInputs().at(j), WIRESTATE_DC);
                    if (error != ERROR_NONE) { 
                        return error;
                    }
                }
            }
        }
        // If the ControlledValue is opposite of the errorVal, then we force all inputs to be opposite of control value
        else { 
            // First, we need to confirm if a wire is already being controlled. If it is, then we cannot successfully Justify
            for (j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) {
                if (wire->GetInputs().at(i)->GetInputs().at(j)->GetState() == GateControlVal.at(wire->GetInputs().at(i)->GetGateType())) {
                    return ERROR_STATE_CONTROLLED;
                }
            }
            // If we do not return prior, then we are good to force all inputs to the opposite of control value
            for (j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
                Justify(wire->GetInputs().at(i)->GetInputs().at(j), WireStateInverted.at(GateControlVal.at(wire->GetInputs().at(i)->GetGateType())));
            }
        }
    }
    if (wire->GetState() != WIRESTATE_UNDEF) {
        return ERROR_STATE_ALREADY_SET;
    }
    else if (wire->GetState() == errorVal) {
        return error;
    }
    wire->SetState(errorVal);
    return error;
}

// Force the WireState of this wire to the output of the netlist, and Justify all other wires to make that possible
int Propogate(ATPGWire* wire) { 
    int error = ERROR_NONE, i, j;
    if (wire == nullptr) { 
        return ERROR_WIRE_IS_NULL;
    }
    if (wire->GetState() == WIRESTATE_UNDEF) { 
        return ERROR_STATE_NOT_SET;
    }
    // If there are no inputs, we can exit quickly
    if (wire->GetOutputs().empty()) { 
        return error;
    }

    for (i = 0; i < wire->GetOutputs().size(); i++) { 
        // If the gate is an inverter, it has no control value but can still be propogated by special logic
        if (wire->GetOutputs().at(i)->GetGateType() == GATETYPE_INV) { 
            wire->GetOutputs().at(i)->GetOutput()->SetState(WireStateInverted.at(wire->GetState()));
        }
        // If the gate is not an inverter, then we can propogate the state forward and justify that backwards
        else { 
            if (GateInverted.at(wire->GetOutputs().at(i)->GetGateType())) { 
                wire->GetOutputs().at(i)->GetOutput()->SetState(WireStateInverted.at(wire->GetState()));
            }
            else {
                wire->GetOutputs().at(i)->GetOutput()->SetState(wire->GetState());
            }
        }
        
        // Set all other wires that are input to this wire's gate to be the non controlling value for this gate
        for (j = 0; j < wire->GetOutputs().at(i)->GetInputs().size(); j++) { 
            if (wire->GetOutputs().at(i)->GetInputs().at(j)->GetID() != wire->GetID()) { 
                error = Justify(wire->GetOutputs().at(i)->GetInputs().at(j), WireStateInverted.at(GateControlVal.at(wire->GetOutputs().at(i)->GetGateType())));
                if (error != ERROR_NONE) { 
                    return error;
                }
            }
        }

        error = Propogate(wire->GetOutputs().at(i)->GetOutput());
    }
    return error;
}

// Parse error code given by ATPGEntry into user output
void ATPGResult(int error, std::vector<std::string> fullResultVector, std::vector<std::string> minimizedResultVector) {
    switch(error) {
        case ERROR_NONE:
            std::cout << "ATPG has successfully ran" << std::endl;
            break;
        case ERROR_NETLIST_EMPTY:
            std::cout << "ATPG failed since no netlist has been provided" << std::endl;
            break;
    }
}

// Return the matching ATPGGate from the gateMap
ATPGGate* GetATPGGateFromMap(std::map<int, ATPGGate*> gateMap, int id) {
    std::map<int, ATPGGate*>::iterator gateIt;
    
    gateIt = gateMap.find(id);
    if (gateIt == gateMap.end())
        return nullptr;
    return gateMap.at(id);
}

// Return the matching ATPGWire from the wireMap
ATPGWire* GetATPGWireFromMap(std::map<int, ATPGWire*> wireMap, int id) {
    std::map<int, ATPGWire*>::iterator wireIt;
    
    wireIt = wireMap.find(id);
    if (wireIt == wireMap.end())
        return nullptr;
    return wireMap.at(id);
}
