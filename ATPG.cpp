#include "ATPG.h"

// Entry point to the ATPG feature
void ATPGEntry(const std::vector<Node*> &netList) {
    int error = ERROR_NONE, vectorCtr;
    std::vector<std::string> fullResultList, minimizedResultList;

    error = ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    if (error == ERROR_NONE) {
        // Eventually add functionality to choose which result vector we want

        std::cout << "Full List of Test Vectors:" << std::endl;
        for (vectorCtr = 0; vectorCtr < fullResultList.size(); vectorCtr++) { 
            std::cout << fullResultList.at(vectorCtr) << std::endl;
        }
    }
    ATPGResult(error);
    return;
}

// Generate a set of test vectors to expose all possible Wire Faults through the output
int ATPGGenerateTestVectors(const std::vector<Node*> &netList, std::vector<std::string> &fullResultList, std::vector<std::string> &minimizedResultList) {
    int error = ERROR_NONE, wireCtr, SAFCtr;
    std::string resultStr;
    std::vector<ATPGGate*> gateList;
    std::vector<ATPGWire*> wireList, inputWireList, outputWireList;
    std::vector<std::string> tagList, resultList;

    error = ATPGTransferNetList(netList, gateList, wireList, inputWireList, outputWireList);
    if (error != ERROR_NONE) {
        ATPGCleanupNetList(gateList, wireList);
        return error;
    }

    // For each ATPGWire in the WireList, we need to calculate TVs to propogate the Stuck At Fault of that ATPGWire to the output
    for (wireCtr = 0; wireCtr < wireList.size(); wireCtr++) {
        for (SAFCtr = 0; SAFCtr < 2; SAFCtr++) { 
            error = ATPGCase(wireList.at(wireCtr), StuckAtFaultWireState.at(static_cast<StuckAtFault>(SAFCtr)), inputWireList, outputWireList, resultStr);
            if (error != ERROR_NONE) { 
                ATPGCleanupNetList(gateList, wireList);
                return error;
            }
            tagList.push_back(wireList.at(wireCtr)->GetName() + " SAF" + std::to_string(SAFCtr));
            resultList.push_back(resultStr);
            resultStr = "";
        }
    }

    fullResultList = ATPGCreateFullResultList(tagList, resultList);
    minimizedResultList = ATPGCreateMinimizedResultList(tagList, resultList);

    ATPGCleanupNetList(gateList, wireList);
    return error;
}

// Generate a Test Vector given a Wire and a WireState. Write out to result the states of inputWireList and outputWireList
int ATPGCase(ATPGWire* wire, WireState wireState, const std::vector<ATPGWire*> &inputWireList, const std::vector<ATPGWire*> &outputWireList, std::string &result) {
    int error = ERROR_NONE, wireCtr;

    if (wire == nullptr) {
        return ERROR_ATPG_CASE_WIRE_IS_NULL;
    }

    // Run Justify and Propogate for this Test Vector Generation
    error = ATPGJustify(wire, wireState);
    if (error != ERROR_NONE) { 
        return error;
    }
    error = ATPGPropogate(wire);
    if (error != ERROR_NONE) { 
        return error;
    }

    result += ATPGCreateResult(inputWireList);
    result += ",";
    result += ATPGCreateResult(outputWireList);
    
    // Reset ATPGWire states
    for (wireCtr = 0; wireCtr < inputWireList.size(); wireCtr++) { 
        ATPGClearWireState(inputWireList.at(wireCtr));
    }
    return error;
}

// Parse existing NetList into various GateLists and WireLists used by the ATPG tool
int ATPGTransferNetList(const std::vector<Node*> &netList, std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<ATPGWire*> &inputWireList, std::vector<ATPGWire*> &outputWireList) {
    int nodeCtr, IDCtr;
    Gate* gate;
    Wire* wire;
    ATPGGate* tempGate;
    ATPGWire* tempWire;
    std::map<int, std::vector<int>> inputIDMap;
    std::map<int, std::vector<int>> outputIDMap;
    std::map<int, ATPGGate*> ATPGGateMap;
    std::map<int, ATPGWire*> ATPGWireMap;
    std::vector<int> inputIDList;
    std::vector<int> outputIDList;

    if (netList.empty()) { 
        return ERROR_ATPG_NETLIST_EMPTY;
    }
    
    // Instantiate an ATPGGate or ATPGWire per each Gate and Wire in the netList. Then, add it to maps for later
    for (nodeCtr = 0; nodeCtr < netList.size(); nodeCtr++) { 
        gate = dynamic_cast<Gate*>(netList.at(nodeCtr));
        if (gate != nullptr) {
            // If we find a gate with an unsupported type, then we should delete our ATPGNetLists and return an error
            if (GateSupportedTypes.at(gate->GetGateType()) == false) { 
                ATPGCleanupNetList(gateList, wireList);
                return ERROR_ATPG_TRANSFERNETLIST_GATETYPE_UNSUPPORTED;
            }

            tempGate = new ATPGGate(gate);
            inputIDMap.insert(std::pair<int, std::vector<int>>(gate->GetID(), GetIDList(gate->GetInputs())));
            outputIDMap.insert(std::pair<int, std::vector<int>>(gate->GetID(), {gate->GetOutput()->GetID()}));
            gateList.push_back(tempGate);
            ATPGGateMap.insert(std::pair<const int, ATPGGate*>(tempGate->GetID(), tempGate));
            continue;
        }

        wire = dynamic_cast<Wire*>(netList.at(nodeCtr));
        if (wire != nullptr) { 
            tempWire = new ATPGWire(wire);
            inputIDMap.insert(std::pair<int, std::vector<int>>(wire->GetID(), GetIDList(wire->GetInputs())));
            outputIDMap.insert(std::pair<int, std::vector<int>>(wire->GetID(), GetIDList(wire->GetOutputs())));
            wireList.push_back(tempWire);
            ATPGWireMap.insert(std::pair<const int, ATPGWire*>(tempWire->GetID(), tempWire));

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
        return ERROR_ATPG_NODE_INVALID_TYPE;
    }

    // For each new ATPGGate, we need to link the input and output ATPGWires
    for (nodeCtr = 0; nodeCtr < gateList.size(); nodeCtr++) { 
        tempGate = gateList.at(nodeCtr);
        inputIDList = inputIDMap.at(tempGate->GetID());
        outputIDList = outputIDMap.at(tempGate->GetID());

        for (IDCtr = 0; IDCtr < inputIDList.size(); IDCtr++) { 
            tempWire = ATPGWireMap.at(inputIDList.at(IDCtr));
            if (tempWire == nullptr) { 
                continue;
            }
            tempGate->ConnectInput(tempWire);
        }

        for (IDCtr = 0; IDCtr < outputIDList.size(); IDCtr++) { 
            tempWire = ATPGWireMap.at(outputIDList.at(IDCtr));
            if (tempWire == nullptr) { 
                continue;
            }
            tempGate->ConnectOutput(tempWire);
        }
    }

    // For each new ATPGWire, we need to link the input and output ATPGGates
    for (nodeCtr = 0; nodeCtr < wireList.size(); nodeCtr++) { 
        tempWire = wireList.at(nodeCtr);
        inputIDList = inputIDMap.at(tempWire->GetID());
        outputIDList = outputIDMap.at(tempWire->GetID());

        for (IDCtr = 0; IDCtr < inputIDList.size(); IDCtr++) { 
            tempGate = ATPGGateMap.at(inputIDList.at(IDCtr));
            if (tempGate == nullptr) { 
                continue;
            }
            tempWire->ConnectInput(tempGate);
        }

        for (IDCtr = 0; IDCtr < outputIDList.size(); IDCtr++) { 
            tempGate = ATPGGateMap.at(outputIDList.at(IDCtr));
            if (tempGate == nullptr) { 
                continue;
            }
            tempWire->ConnectOutput(tempGate);
        }
    }
    return ERROR_NONE;
}

// Set all input Wires to wire to states that allow force the given wireState
int ATPGJustify(ATPGWire* wire, WireState wireState) { 
    int error = ERROR_NONE, inputGateCtr, inputWireCtr, controlledCtr = -1;
    WireState currWireState;
    std::vector<ATPGGate*> wireInputList;
    ATPGGate *gate;
    GateType gateType;
    std::vector<ATPGWire*> gateInputList;
    WireState gateControlVal;

    if (wire == nullptr) { 
        return ERROR_ATPG_JUSTIFY_WIRE_IS_NULL;
    }

    currWireState = wire->GetWireState();
    if (currWireState != WIRESTATE_UNDEF && currWireState != wireState) { 
        return ERROR_ATPG_STATE_ALREADY_SET;
    }

    // If there are no inputs, we can set the state and exit quickly
    wireInputList = wire->GetInputs();
    if (wireInputList.empty()) { 
        wire->SetWireState(wireState);
        return error;
    }
    
    // If there are inputs, we need to determine what to do based upon wireState per input
    for (inputGateCtr = 0; inputGateCtr < wireInputList.size(); inputGateCtr++) { 
        gate = wireInputList.at(inputGateCtr);
        gateType = gate->GetGateType();
        gateInputList = gate->GetInputs();
        gateControlVal = GateControlVal.at(gateType);
        if (ATPGJustifyEdgeCase(gateType, gateInputList, wireState, error)) {
            if (error != ERROR_NONE) { 
                return error;
            }
        }
        // If the ControlledValue is equal to wireState, then we force an input to be the control value and all others as WIRESTATE_DC
        else if (GateStateWhileControlled.at(gateType) == wireState) { 
            // Check if we already have the matching contrl val and place its index into controlledCtr
            ATPGDoesWireListHaveWireState(gateInputList, gateControlVal, &controlledCtr);

            // We Justify one gate with the control value (if not already there). Then we Justify the rest with WIRESTATE_DCs
            for (inputWireCtr = 0; inputWireCtr < gateInputList.size(); inputWireCtr++) { 
                // If we do not have a controlled Wire, control the first Wire
                if (controlledCtr == -1) { 
                    error = ATPGJustify(gateInputList.at(inputWireCtr), gateControlVal);
                    if (error != ERROR_NONE) { 
                        return error;
                    }
                    controlledCtr = inputWireCtr;
                    continue;
                }
                if (inputWireCtr == controlledCtr) { 
                    continue;
                }
                error = ATPGJustify(gateInputList.at(inputWireCtr), WIRESTATE_DC);
                if (error != ERROR_NONE) { 
                    return error;
                }
            }
        }
        // If the ControlledValue is opposite of wireState, then we force all inputs to be opposite of control value
        else {
            if (ATPGDoesWireListHaveWireState(gateInputList, gateControlVal, nullptr)) { 
                return ERROR_ATPG_STATE_CONTROLLED;
            }
            // If we do not return prior, then we are good to force all inputs to the opposite of control value
            for (inputWireCtr = 0; inputWireCtr < gateInputList.size(); inputWireCtr++) { 
                ATPGJustify(gateInputList.at(inputWireCtr), WireStateInverted.at(gateControlVal));
            }
        }
    }

    // At this point, all other inputs to this Wire should be set. Set wire's WireState and return 
    if (currWireState != WIRESTATE_UNDEF) {
        return ERROR_ATPG_STATE_ALREADY_SET;
    }
    wire->SetWireState(wireState);
    return error;
}

// Handle edge cases in the Justify function
bool ATPGJustifyEdgeCase(GateType gateType, const std::vector<ATPGWire*> gateInputList, WireState wireState, int &error) {
    int inputWireCtr;

    if (GateSupportedTypes.at(gateType) == false) {
        return ERROR_ATPG_JUSTIFY_GATETYPE_UNSUPPORTED;
    }
    // If the gate is an inverter, it has no control value but can still be justified by special logic
    else if (gateType == GATETYPE_INV) { 
        error = ATPGJustify(gateInputList.at(0), WireStateInverted.at(wireState));
        return true;
    }
    // If the current wire is WIRESTATE_DC, all inputs to the gates connected to this wire will be WIRESTATE_DC
    else if (wireState == WIRESTATE_DC) {
        for (inputWireCtr = 0; inputWireCtr < gateInputList.size(); inputWireCtr++) { 
            ATPGJustify(gateInputList.at(inputWireCtr), WIRESTATE_DC);
        }
        return true;
    }
    return false;
}

// Return true if the wireList includes an ATPGWire with WireState gateControlVal and place that index into result
bool ATPGDoesWireListHaveWireState(const std::vector<ATPGWire*> &wireList, WireState gateControlVal, int* gateControlIdx) { 
    int inputWireCtr;

    for (inputWireCtr = 0; inputWireCtr < wireList.size(); inputWireCtr++) { 
        if (wireList.at(inputWireCtr)->GetWireState() == gateControlVal) { 
            if (gateControlIdx == nullptr) {
                return true;
            }
            *gateControlIdx = inputWireCtr;
            return true;
        }
    }
    return false;
}

// Force the WireState of wire to the output of the netlist, and Justify all other Wires in this path to allow this
int ATPGPropogate(ATPGWire* wire) { 
    int error = ERROR_NONE, gateCtr, wireCtr, wireID;
    WireState currWireState;
    std::vector<ATPGGate*> wireOutputList;
    ATPGGate* gate;
    GateType gateType;
    std::vector<ATPGWire*> gateInputList;
    ATPGWire* gateOutput;

    if (wire == nullptr) { 
        return ERROR_ATPG_PROPOGATE_WIRE_IS_NULL;
    }

    currWireState = wire->GetWireState();
    if (currWireState == WIRESTATE_UNDEF) { 
        return ERROR_ATPG_STATE_NOT_SET;
    }

    // If there are no inputs, we can exit quickly
    wireOutputList = wire->GetOutputs();
    if (wireOutputList.empty()) { 
        return error;
    }

    for (gateCtr = 0; gateCtr < wireOutputList.size(); gateCtr++) { 
        gate = wireOutputList.at(gateCtr);
        gateType = gate->GetGateType();
        gateInputList = gate->GetInputs();
        gateOutput = gate->GetOutput();
        if (ATPGPropogateEdgeCase(gateType, gateOutput, currWireState, error)) { 
            if (error != ERROR_NONE) { 
                return error;
            }
        }
        // If this is not an edge case we can propogate the state forward and justify that backwards
        else { 
            if (GateInverted.at(gateType)) { 
                gateOutput->SetWireState(WireStateInverted.at(currWireState));
            }
            else {
                gateOutput->SetWireState(currWireState);
            }
        }
        
        // Set all other Wires that are input to wire's Gate to be the non controlling value for this Gate
        wireID = wire->GetID();
        for (wireCtr = 0; wireCtr < gateInputList.size(); wireCtr++) { 
            if (gateInputList.at(wireCtr)->GetID() != wireID) { 
                error = ATPGJustify(gateInputList.at(wireCtr), WireStateInverted.at(GateControlVal.at(gateType)));
                if (error != ERROR_NONE) { 
                    return error;
                }
            }
        }
        error = ATPGPropogate(gateOutput);
    }
    return error;
}

// Handle edge cases in the Propogate function
bool ATPGPropogateEdgeCase(GateType gateType, ATPGWire* gateOutput, WireState wireState, int &error) {
    // If the gate is an inverter, it has no control value but can still be propogated by inverting the output
    if (GateSupportedTypes.at(gateType) == false) { 
        error = ERROR_ATPG_PROPOGATE_GATETYPE_UNSUPPORTED;
        return true;
    }
    else if (gateType == GATETYPE_INV) { 
        gateOutput->SetWireState(WireStateInverted.at(wireState));
        return true;
    }
    return false;
}

// Parse wireList into a full result
std::string ATPGCreateResult(const std::vector<ATPGWire*> &wireList) { 
    int wireCtr;
    std::string tempWireNames = "", tempStates = "";

    for (wireCtr = 0; wireCtr < wireList.size(); wireCtr++) { 
        tempWireNames += wireList.at(wireCtr)->GetName();
        tempStates += WireStateString.at(wireList.at(wireCtr)->GetWireState());
    }
    return "{" + tempWireNames + "}={" + tempStates + "}";
}

// Clear the wire's WireState and recursively clear all outputs of this wire
void ATPGClearWireState(ATPGWire* wire) {
    int gateCtr;
    std::vector<ATPGGate*> wireOutputList;
    ATPGGate* gate;

    if (wire == nullptr) { 
        return;
    }
    if (wire->GetWireState() == WIRESTATE_UNDEF) { 
        return;
    }

    wire->SetWireState(WIRESTATE_UNDEF);
    wireOutputList = wire->GetOutputs();
    for (gateCtr = 0; gateCtr < wireOutputList.size(); gateCtr++) { 
        gate = wireOutputList.at(gateCtr);
        ATPGClearWireState(gate->GetOutput());
    }
}

// Parse tagList and resultList into a full result vector
std::vector<std::string> ATPGCreateFullResultList(const std::vector<std::string> &tagList, const std::vector<std::string> &resultList) {
    int tagCtr;
    std::vector<std::string> result;

    for (tagCtr = 0; tagCtr < tagList.size(); tagCtr++) {
        result.push_back(tagList.at(tagCtr) + ":" + resultList.at(tagCtr));
    }
    return result;
}

// Parse tagList and resultList into a minimzed reuslt vector
std::vector<std::string> ATPGCreateMinimizedResultList(const std::vector<std::string> &tagList, const std::vector<std::string> &resultList) {
    int tagCtr, secTagCtr;
    std::string tempTag;
    std::map<std::string, bool> usedTags;
    std::vector<std::string> result;

    // Eventually add logic to minimize our result list more inside this function
    
    // For each tag, find matching results and append this and the matching tags to a new tag
    for (tagCtr = 0; tagCtr < tagList.size(); tagCtr++) { 
        // If our tag is already inside the usedTags map, then we can skip to the next tag
        if (usedTags.find(tagList.at(tagCtr)) != usedTags.end()) { 
            continue;
        }
        tempTag = tagList.at(tagCtr);
        // If our tag has not been used, then we need to find all matches to this tag and add them to our tempTags
        for (secTagCtr = 0; secTagCtr < tagList.size(); secTagCtr++) {
            if (tagCtr == secTagCtr) {
                continue;
            }
            else if (resultList.at(tagCtr) == resultList.at(secTagCtr)) { 
                tempTag += ", " + tagList.at(secTagCtr);
                usedTags.insert(std::pair<const std::string, const bool>(tagList.at(secTagCtr), true));
            }
        }
        result.push_back(tempTag + ":" + resultList.at(tagCtr));
    }
    return result;
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
void ATPGResult(int error) {
    switch(error) {
        case ERROR_NONE:
            std::cout << "ATPG has successfully ran." << std::endl;
            break;
        case ERROR_ATPG_CASE_WIRE_IS_NULL:
            std::cout << "ATPG failed a null Wire." << std::endl;
            break;
        case ERROR_ATPG_NETLIST_EMPTY:
            std::cout << "ATPG failed due to an empty NetList." << std::endl;
            break;
        case ERROR_ATPG_TRANSFERNETLIST_GATETYPE_UNSUPPORTED:
            std::cout << "ATPG failed to transfer the NetList due to an unsupported Gate type." << std::endl;
            break;
        case ERROR_ATPG_NODE_INVALID_TYPE:
            std::cout << "ATPG failed to transfer the NetList due to an invalid Node type." << std::endl;
            break;
        case ERROR_ATPG_JUSTIFY_WIRE_IS_NULL:
            std::cout << "ATPG failed to justify a null Wire." << std::endl;
            break;
        case ERROR_ATPG_STATE_ALREADY_SET:
            std::cout << "ATPG failed to justify an already set Wire." << std::endl;
            break;
        case ERROR_ATPG_STATE_CONTROLLED:
            std::cout << "ATPG failed to justify an already controlled Gate." << std::endl;
            break;
        case ERROR_ATPG_JUSTIFY_GATETYPE_UNSUPPORTED:
            std::cout << "ATPG failed to justify due to an unsupported Gate type." << std::endl;
            break;
        case ERROR_ATPG_PROPOGATE_WIRE_IS_NULL:
            std::cout << "ATPG failed to propogate a null Wire." << std::endl;
            break;
        case ERROR_ATPG_STATE_NOT_SET:
            std::cout << "ATPG failed to propogate a Wire since its state is undefined." << std::endl;
            break;
        case ERROR_ATPG_PROPOGATE_GATETYPE_UNSUPPORTED:
            std::cout << "ATPG failed to propogate due to an unsupported Gate type." << std::endl;
            break;
        default:
            std::cout << "ATPG failed due to unknown reason." << std::endl;
            break;
    }
}
