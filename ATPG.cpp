#include "ATPG.h"

int ATPGEntry(std::vector<Node*> netList, std::vector<std::string> &fullResultVector, std::vector<std::string> &minimizedResultVector) {
    int result = ERROR_NONE, wireCtr, SAFCtr;
    std::string resultStr;
    std::vector<ATPGGate*> gateList;
    std::vector<ATPGWire*> wireList, inputWireList, outputWireList;
    std::vector<std::string> tagVector, resultVector;
    if (netList.empty()) { 
        return ERROR_NETLIST_EMPTY;
    }

    result = ATPGTransferNetList(netList, gateList, wireList, inputWireList, outputWireList);
    if (result != ERROR_NONE) {
        return result;
    }

    // For each ATPGWire in the WireList, we need to calculate TVs to propogate the Stuck At Fault of that ATPGWire to the output
    for (wireCtr = 0; wireCtr < wireList.size(); wireCtr++) {
        for (SAFCtr = 0; SAFCtr < 2; SAFCtr++) { 
            result = ATPGCase(wireList.at(wireCtr), StuckAtFaultWireState.at(static_cast<StuckAtFault>(SAFCtr)), inputWireList, outputWireList, resultStr);
            if (result != ERROR_NONE) { 
                return result;
            }
            tagVector.push_back(wireList.at(wireCtr)->GetWire()->GetName() + " SAF" + std::to_string(SAFCtr));
            resultVector.push_back(resultStr);
            resultStr = "";
        }
    }

    fullResultVector = CreateFullResultVector(tagVector, resultVector);
    minimizedResultVector = CreateMinimizedResultVector(tagVector, resultVector);

    ATPGCleanupNetList(gateList, wireList);
    return result;
}

// Parse existing NetList into various GateLists and WireLists used by the ATPG tool
int ATPGTransferNetList(std::vector<Node*> netList, std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<ATPGWire*> &inputWireList, std::vector<ATPGWire*> &outputWireList) {
    int nodeCtr, IDCtr;
    Gate* gate;
    Wire* wire;
    ATPGGate* tempGate;
    ATPGWire* tempWire;
    std::vector<int> inputIDVector;
    std::vector<int> outputIDVector;
    std::map<int, std::vector<int>> inputIDMap;
    std::map<int, std::vector<int>> outputIDMap;
    std::map<int, ATPGGate*> ATPGGateMap;
    std::map<int, ATPGWire*> ATPGWireMap;
    if (netList.empty()) { 
        return ERROR_NETLIST_EMPTY;
    }
    
    // Instantiate an ATPGGate or ATPGWire per each Gate and Wire in the netList
    for (nodeCtr = 0; nodeCtr < netList.size(); nodeCtr++) { 
        gate = dynamic_cast<Gate*>(netList.at(nodeCtr));
        if (gate != nullptr) {
            // If we find a gate with an unsupported type, then we should delete our ATPGNetLists and return an error
            if (ATPGSupportedTypes.at(gate->GetGateType()) == false) { 
                ATPGCleanupNetList(gateList, wireList);
                return ERROR_GATETYPE_INVALID_TYPE;
            }

            tempGate = new ATPGGate(gate);
            inputIDMap.insert(std::pair<int, std::vector<int>>(gate->GetID(), GetIDList(gate->GetInputs())));
            outputIDMap.insert(std::pair<int, std::vector<int>>(gate->GetID(), {gate->GetOutput()->GetID()}));
            gateList.push_back(tempGate);
            ATPGGateMap.insert(std::pair<const int, ATPGGate*>(tempGate->GetGate()->GetID(), tempGate));
            continue;
        }

        wire = dynamic_cast<Wire*>(netList.at(nodeCtr));
        if (wire != nullptr) { 
            tempWire = new ATPGWire(wire);
            inputIDMap.insert(std::pair<int, std::vector<int>>(wire->GetID(), GetIDList(wire->GetInputs())));
            outputIDMap.insert(std::pair<int, std::vector<int>>(wire->GetID(), GetIDList(wire->GetOutputs())));
            wireList.push_back(tempWire);
            ATPGWireMap.insert(std::pair<const int, ATPGWire*>(tempWire->GetWire()->GetID(), tempWire));

            // Additionally, if the wire is an input or a wire is an output, then add it to the corresponding list
            if (tempWire->GetWire()->GetInputs().empty() && !tempWire->GetWire()->GetOutputs().empty()) {
                inputWireList.push_back(tempWire);
            }
            else if (!tempWire->GetWire()->GetInputs().empty() && tempWire->GetWire()->GetOutputs().empty()) {
                outputWireList.push_back(tempWire);
            }
            continue;            
        }

        // If we get to this point, gate and wire dynamic_cast failed so we should delete our ATPGNetLists and return an error
        ATPGCleanupNetList(gateList, wireList);
        return ERROR_NODE_INVALID_TYPE;
    }

    // For each new ATPGGate, we need to link the input and output ATPGWires
    for (nodeCtr = 0; nodeCtr < gateList.size(); nodeCtr++) { 
        tempGate = gateList.at(nodeCtr);
        inputIDVector = inputIDMap.at(tempGate->GetID());
        outputIDVector = outputIDMap.at(tempGate->GetID());

        for (IDCtr = 0; IDCtr < inputIDVector.size(); IDCtr++) { 
            tempWire = ATPGWireMap.at(inputIDVector.at(IDCtr));
            if (tempWire == nullptr) { 
                continue;
            }
            tempGate->ConnectInput(tempWire);
        }

        for (IDCtr = 0; IDCtr < outputIDVector.size(); IDCtr++) { 
            tempWire = ATPGWireMap.at(outputIDVector.at(IDCtr));
            if (tempWire == nullptr) { 
                continue;
            }
            tempGate->ConnectOutput(tempWire);
        }
    }

    // For each new ATPGWire, we need to link the input and output ATPGGates
    for (nodeCtr = 0; nodeCtr < wireList.size(); nodeCtr++) { 
        tempWire = wireList.at(nodeCtr);
        inputIDVector = inputIDMap.at(tempWire->GetID());
        outputIDVector = outputIDMap.at(tempWire->GetID());

        for (IDCtr = 0; IDCtr < inputIDVector.size(); IDCtr++) { 
            tempGate = ATPGGateMap.at(inputIDVector.at(IDCtr));
            if (tempGate == nullptr) { 
                continue;
            }
            tempWire->ConnectInput(tempGate);
        }

        for (IDCtr = 0; IDCtr < outputIDVector.size(); IDCtr++) { 
            tempGate = ATPGGateMap.at(outputIDVector.at(IDCtr));
            if (tempGate == nullptr) { 
                continue;
            }
            tempWire->ConnectOutput(tempGate);
        }
    }
    return ERROR_NONE;
}

// Generate a Test Vector given a Wire and an error value. Write out to result the states of inputWireList and outputWireList
int ATPGCase(ATPGWire* wire, WireState errorVal, std::vector<ATPGWire*> inputWireList, std::vector<ATPGWire*> outputWireList, std::string &result) {
    int error = ERROR_NONE, wireCtr;
    if (wire == nullptr) {
        return ERROR_WIRE_IS_NULL;
    }

    // Run the Justify and Propogate for this Test Vector Generation
    error = Justify(wire, errorVal);
    if (error != ERROR_NONE) { 
        return error;
    }
    error = Propogate(wire);
    if (error != ERROR_NONE) { 
        return error;
    }

    result += CreateResult(inputWireList);
    result += ",";
    result += CreateResult(outputWireList);
    
    // Reset ATPGWire states
    for (wireCtr = 0; wireCtr < inputWireList.size(); wireCtr++) { 
        ATPGClearWireState(inputWireList.at(wireCtr));
    }
    return error;
}

// Set all inputs to wire to states that allow force the given errorVal
int Justify(ATPGWire* wire, WireState errorVal) { 
    int error = ERROR_NONE, inputGateCtr, inputWireCtr, controlledCtr = -1;
    ATPGGate *inputGate;
    std::vector<ATPGWire*> inputGateVector;
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
    for (inputGateCtr = 0; inputGateCtr < wire->GetInputs().size(); inputGateCtr++) { 
        inputGate = wire->GetInputs().at(inputGateCtr);
        inputGateVector = inputGate->GetInputs();
        if (JustifyEdgeCase(inputGate, inputGateVector, errorVal, error)) {
            if (error != ERROR_NONE) { 
                return error;
            }
        }
        // If the ControlledValue is the errorVal, then we force an input to be the control value and all others as WIRESTATE_DC
        else if (GateStateWhileControlled.at(inputGate->GetGateType()) == errorVal) { 
            // First, we need to confirm if a wire is already being controlled.
            for (inputWireCtr = 0; inputWireCtr < inputGateVector.size(); inputWireCtr++) { 
                if (inputGateVector.at(inputWireCtr)->GetState() == GateControlVal.at(inputGate->GetGateType())) { 
                    controlledCtr = inputWireCtr;
                    break;
                }
            }
            // We Justify one gate with the control value (if not already there). Then we Justify the rest with WIRESTATE_DCs
            for (inputWireCtr = 0; inputWireCtr < inputGateVector.size(); inputWireCtr++) { 
                if (controlledCtr == -1) {
                    error = Justify(inputGateVector.at(inputWireCtr), GateControlVal.at(inputGate->GetGateType()));
                    if (error != ERROR_NONE) {
                        return error;
                    }
                    controlledCtr = inputWireCtr;
                    continue;
                }
                else {
                    if (inputWireCtr == controlledCtr) { 
                        continue;
                    }
                    error = Justify(inputGateVector.at(inputWireCtr), WIRESTATE_DC);
                    if (error != ERROR_NONE) { 
                        return error;
                    }
                }
            }
        }
        // If the ControlledValue is opposite of the errorVal, then we force all inputs to be opposite of control value
        else { 
            // First, we need to confirm if a wire is already being controlled. If it is, then we cannot successfully Justify
            for (inputWireCtr = 0; inputWireCtr < inputGateVector.size(); inputWireCtr++) {
                if (inputGateVector.at(inputWireCtr)->GetState() == GateControlVal.at(inputGate->GetGateType())) {
                    return ERROR_STATE_CONTROLLED;
                }
            }
            // If we do not return prior, then we are good to force all inputs to the opposite of control value
            for (inputWireCtr = 0; inputWireCtr < inputGateVector.size(); inputWireCtr++) { 
                Justify(inputGateVector.at(inputWireCtr), WireStateInverted.at(GateControlVal.at(inputGate->GetGateType())));
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

// Handle edge cases in the Justify function
bool JustifyEdgeCase(ATPGGate* inputGate, std::vector<ATPGWire*> inputGateVector, WireState errorVal, int &error) {
    int inputWireCtr;
    if (ATPGSupportedTypes.at(inputGate->GetGateType()) == false) {
        return ERROR_GATETYPE_INVALID_TYPE;
    }
    // If the gate is an inverter, it has no control value but can still be justified by special logic
    else if (inputGate->GetGateType() == GATETYPE_INV) { 
        error = Justify(inputGateVector.at(0), WireStateInverted.at(errorVal));
        return true;
    }
    // If the current wire is WIRESTATE_DC, all inputs to the gates connected to this wire will be WIRESTATE_DC
    else if (errorVal == WIRESTATE_DC) {
        for (inputWireCtr = 0; inputWireCtr < inputGateVector.size(); inputWireCtr++) { 
            Justify(inputGateVector.at(inputWireCtr), WIRESTATE_DC);
        }
        return true;
    }
    return false;
}

// Force the WireState of this wire to the output of the netlist, and Justify all other wires to make that possible
int Propogate(ATPGWire* wire) { 
    int error = ERROR_NONE, outputGateCtr, inputWireCtr;
    ATPGGate* outputGate;
    std::vector<ATPGWire*> inputWireVector;
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

    for (outputGateCtr = 0; outputGateCtr < wire->GetOutputs().size(); outputGateCtr++) { 
        outputGate = wire->GetOutputs().at(outputGateCtr);
        inputWireVector = outputGate->GetInputs();

        if (PropogateEdgeCase(outputGate, wire->GetState(), error)) { 
            if (error != ERROR_NONE) { 
                return error;
            }
        }
        // If this is not an edge case we can propogate the state forward and justify that backwards
        else { 
            if (GateInverted.at(outputGate->GetGateType())) { 
                outputGate->GetOutput()->SetState(WireStateInverted.at(wire->GetState()));
            }
            else {
                outputGate->GetOutput()->SetState(wire->GetState());
            }
        }
        
        // Set all other wires that are input to this wire's gate to be the non controlling value for this gate
        for (inputWireCtr = 0; inputWireCtr < inputWireVector.size(); inputWireCtr++) { 
            if (inputWireVector.at(inputWireCtr)->GetID() != wire->GetID()) { 
                error = Justify(inputWireVector.at(inputWireCtr), WireStateInverted.at(GateControlVal.at(outputGate->GetGateType())));
                if (error != ERROR_NONE) { 
                    return error;
                }
            }
        }
        error = Propogate(outputGate->GetOutput());
    }
    return error;
}

// Handle edge cases in the Propogate function
bool PropogateEdgeCase(ATPGGate* outputGate, WireState wireState, int &error) {
    // If the gate is an inverter, it has no control value but can still be propogated by inverting the output
    if (ATPGSupportedTypes.at(outputGate->GetGateType()) == false) { 
        error = ERROR_GATETYPE_INVALID_TYPE;
        return true;
    }
    else if (outputGate->GetGateType() == GATETYPE_INV) { 
        outputGate->GetOutput()->SetState(WireStateInverted.at(wireState));
        return true;
    }
    return false;
}

// Parse wireList into a full result
std::string CreateResult(std::vector<ATPGWire*> wireList) { 
    int wireCtr;
    std::string tempWireNames = "", tempStates = "";
    for (wireCtr = 0; wireCtr < wireList.size(); wireCtr++) { 
        tempWireNames += wireList.at(wireCtr)->GetWire()->GetName();
        tempStates += WireStateString.at(wireList.at(wireCtr)->GetState());
    }
    return "{" + tempWireNames + "}={" + tempStates + "}";
}

// Parse tagVector and resultVector into a full result vector
std::vector<std::string> CreateFullResultVector(std::vector<std::string> tagVector, std::vector<std::string> resultVector) {
    int tagCtr;
    std::vector<std::string> result;
    for (tagCtr = 0; tagCtr < tagVector.size(); tagCtr++) {
        result.push_back(tagVector.at(tagCtr) + ":" + resultVector.at(tagCtr));
    }
    return result;
}

// Parse tagVector and resultVector into a minimzed reuslt vector
std::vector<std::string> CreateMinimizedResultVector(std::vector<std::string> tagVector, std::vector<std::string> resultVector) {
    int tagCtr, secTagCtr;
    std::string tempTag;
    std::map<std::string, bool> usedTags;
    std::vector<std::string> result;
    // For each tag, find matching results and append this and the matching tags to a new tag
    for (tagCtr = 0; tagCtr < tagVector.size(); tagCtr++) { 
        // If our tag is already inside the usedTags map, then we can skip to the next tag
        if (usedTags.find(tagVector.at(tagCtr)) != usedTags.end()) { 
            continue;
        }
        tempTag = tagVector.at(tagCtr);
        // If our tag has not been used, then we need to find all matches to this tag and add them to our tempTags
        for (secTagCtr = 0; secTagCtr < tagVector.size(); secTagCtr++) {
            if (tagCtr == secTagCtr) {
                continue;
            }
            else if (resultVector.at(tagCtr) == resultVector.at(secTagCtr)) { 
                tempTag += ", " + tagVector.at(secTagCtr);
                usedTags.insert(std::pair<const std::string, const bool>(tagVector.at(secTagCtr), true));
            }
        }
        result.push_back(tempTag + ":" + resultVector.at(tagCtr));
    }
    return result;
}

// Clear the wire's WireState and recursively clear all outputs of this wire
void ATPGClearWireState(ATPGWire* wire) {
    int gateCtr;
    ATPGGate* gate;
    if (wire == nullptr) { 
        return;
    }
    if (wire->GetState() == WIRESTATE_UNDEF) { 
        return;
    }

    wire->SetState(WIRESTATE_UNDEF);
    for (gateCtr = 0; gateCtr < wire->GetOutputs().size(); gateCtr++) { 
        gate = wire->GetOutputs().at(gateCtr);
        ATPGClearWireState(gate->GetOutput());
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
