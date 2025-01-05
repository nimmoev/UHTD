#include "ATPG.h"

// Returns a bool representing if a Gate will invert the output
std::map<GateType, bool> GateInverted = {
    {INV, false},
    {AND, false},
    {OR, false},
    {NAND, true},
    {NOR, true},
    {XOR, false},
    {XNOR, true},
    {UNDEF, false},
};

// Returns a WireState representing the inverted WireState
std::map<WireState, WireState> WireStateInverted = {
    {WIRESTATE_OFF, WIRESTATE_ON},
    {WIRESTATE_ON, WIRESTATE_OFF},
    {WIRESTATE_DC, WIRESTATE_DC},
    {WIRESTATE_UNSET, WIRESTATE_UNSET},
};

// Returns a WireState representing the value that will control a Gates output
std::map<GateType, WireState> GateControlVal = { 
    {INV, WIRESTATE_UNSET},
    {AND, WIRESTATE_OFF},
    {OR, WIRESTATE_ON},
    {NAND, WIRESTATE_OFF},
    {NOR, WIRESTATE_ON},
    {XOR, WIRESTATE_UNSET},
    {XNOR, WIRESTATE_UNSET},
    {UNDEF, WIRESTATE_UNSET},
};

// Returns a WireState representing the WireState of the Gate while the Gate is controlled
std::map<GateType, WireState> GateStateWhileControlled = {
    {INV, WIRESTATE_UNSET},
    {AND, WIRESTATE_OFF},
    {OR, WIRESTATE_ON},
    {NAND, WIRESTATE_ON},
    {NOR, WIRESTATE_OFF},
    {XOR, WIRESTATE_UNSET},
    {XNOR, WIRESTATE_UNSET},
    {UNDEF, WIRESTATE_UNSET},
};

int ATPGEntry(std::vector<Node*> netList) {
    int result = ERROR_NONE;
    std::string resultStr;
    std::vector<ATPGGate*> gateList;
    std::vector<ATPGWire*> wireList;
    std::vector<ATPGWire*> inputWireList;
    std::vector<ATPGWire*> outputWireList;
    if (netList.empty()) { 
        return ERROR_NETLIST_EMPTY;
    }

    result = CopyNetListToATPG(netList, gateList, wireList, inputWireList, outputWireList);
    if (result != ERROR_NONE) {
        return result;
    }

    // For each ATPGWire in the WireList, we need to calculate TVs to propogate the Stuck At Fault of that ATPGWire to the output
    for (int i = 0; i < wireList.size(); i++) {
        for (int j = 0; j < 2; j++) { 
            result = ATPGCase(wireList.at(i), static_cast<WireState>(j), resultStr);
            if (result != ERROR_NONE) { 
                return result;
            }
        }
    }
    return result;
}

// Parse existing NetList into various GateLists and WireLists used by the ATPG tool
int CopyNetListToATPG(std::vector<Node*> netList, std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<ATPGWire*> &inputWireList, std::vector<ATPGWire*> &outputWireList) {
    int error = ERROR_NONE;
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
    for (int i = 0; i < netList.size(); i++) { 
        gate = dynamic_cast<Gate*>(netList.at(i));
        if (gate != nullptr) {
            if (gate->GetGateType() == XOR || gate->GetGateType() == XNOR || gate->GetGateType() == UNDEF) { 
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
    for (int i = 0; i < netList.size(); i++) { 
        // For each original Gate, link the corresponding input and output ATPGWires to the corresponding ATPGGate
        gate = dynamic_cast<Gate*>(netList.at(i));
        if (gate != nullptr) {
            newGate = GetATPGGateFromMap(gateMap, gate->GetID());
            if (newGate == nullptr) { 
                continue;
            }

            for (int j = 0; j < gate->GetInputs().size(); j++) { 
                newWire = GetATPGWireFromMap(wireMap, gate->GetInputs().at(j)->GetID());
                if (newWire == nullptr) { 
                    continue;
                }
                newGate->_ConnectInput(newWire);
            }

            newWire = GetATPGWireFromMap(wireMap, gate->GetOutput()->GetID());
            if (newWire == nullptr) { 
                continue;
            }
            newGate->_ConnectOutput(newWire);        
        }

        // For each original Wire, link the corresponding input and output ATPGGates to the corresponding ATPGWire
        wire = dynamic_cast<Wire*>(netList.at(i));
        if (wire != nullptr) { 

            newWire = GetATPGWireFromMap(wireMap, wire->GetID());
            if (newWire == nullptr) { 
                continue;
            }
            
            for (int j = 0; j < wire->GetInputs().size(); j++) { 
                newGate = GetATPGGateFromMap(gateMap, wire->GetInputs().at(j)->GetID());
                if (newGate == nullptr) { 
                    continue;
                }
                newWire->_ConnectInput(newGate);
            }

            for (int j = 0; j < wire->GetOutputs().size(); j++) { 
                newGate = GetATPGGateFromMap(gateMap, wire->GetOutputs().at(j)->GetID());
                if (newGate == nullptr) { 
                    continue;
                }
                newWire->_ConnectOutput(newGate);
            }
        }
    }
    return error;
}

// Delete all ATPG objects allocated onto the heap by CopyNetListToATPG
void CleanupATPGNetList(std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList) {
    for (ATPGGate* gate : gateList) { 
        delete gate;
    }
    gateList.clear();

    for (ATPGWire* wire : wireList) { 
        delete wire;
    }
    wireList.clear();
}

// Generate a Test Vector given a Wire and an error value
//  wire - Pointer to the Wire to use
//  errorVal - the value that the Wire is stuck at
int ATPGCase(ATPGWire* wire, WireState errorVal, std::string &result) {
    int error = ERROR_NONE;
    error = Justify(wire, errorVal);
    if (error != ERROR_NONE) { 
        return error;
    }

    error = Propogate(wire);
    if (error != ERROR_NONE) { 
        return error;
    }
    return error;
}

// Set all inputs to wire to states that allow force the given errorVal
int Justify(ATPGWire* wire, WireState errorVal) { 
    int error = ERROR_NONE;
    bool controlled = false;
    int controlledIdx = -1;
    if (wire == nullptr) { 
        return ERROR_WIRE_IS_NULL;
    }
    if (wire->GetState() != WIRESTATE_UNSET && wire->GetState() != errorVal) { 
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
    for (int i = 0; i < wire->GetInputs().size(); i++) { 
        // If the gate is an inverter, it has no control value but can still be justified by special logic
        if (wire->GetInputs().at(i)->GetGateType() == INV) { 
            error = Justify(wire->GetInputs().at(i)->GetInputs().at(0), WireStateInverted.at(errorVal));
            if (error != ERROR_NONE) { 
                return error;
            }
        }
        // If the ControlledValue is the errorVal, then we force an input to be the control value and all others as WIRESTATE_DC
        else if (GateStateWhileControlled.at(wire->GetInputs().at(i)->GetGateType()) == errorVal) { 
            // First, we need to confirm if a wire is already being controlled.
            for (int j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
                if (wire->GetInputs().at(i)->GetInputs().at(j)->GetState() == GateControlVal.at(wire->GetInputs().at(i)->GetGateType())) { 
                    controlled = true;
                    controlledIdx = j;
                }
            }
            // We Justify one gate with the control value (if not already there). Then we Justify the rest with WIRESTATE_DCs
            for (int j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
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
            for (int j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) {
                if (wire->GetInputs().at(i)->GetInputs().at(j)->GetState() == GateControlVal.at(wire->GetInputs().at(i)->GetGateType())) {
                    return ERROR_STATE_CONTROLLED;
                }
            }
            // If we do not return prior, then we are good to force all inputs to the opposite of control value
            for (int j = 0; j < wire->GetInputs().at(i)->GetInputs().size(); j++) { 
                Justify(wire->GetInputs().at(i)->GetInputs().at(j), WireStateInverted.at(GateControlVal.at(wire->GetInputs().at(i)->GetGateType())));
            }
        }
    }
    if (wire->GetState() != WIRESTATE_UNSET) {
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
    int error = ERROR_NONE;
    if (wire == nullptr) { 
        return ERROR_WIRE_IS_NULL;
    }
    if (wire->GetState() == WIRESTATE_UNSET) { 
        return ERROR_STATE_NOT_SET;
    }
    // If there are no inputs, we can exit quickly
    if (wire->GetOutputs().empty()) { 
        return error;
    }

    for (int i = 0; i < wire->GetOutputs().size(); i++) { 
        // If the gate is an inverter, it has no control value but can still be propogated by special logic
        if (wire->GetOutputs().at(i)->GetGateType() == INV) { 
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

            error = Justify(wire->GetOutputs().at(i)->GetOutput(), wire->GetOutputs().at(i)->GetOutput()->GetState());
            if (error != ERROR_NONE) { 
                return error;
            }

            error = Propogate(wire->GetOutputs().at(i)->GetOutput());
        }
    }
    return error;
}

// Parse error code given by ATPGEntry into user output
void ATPGResult(int error) {
    switch(error) {
        case ERROR_NONE:
            std::cout << "ATPG has successfully ran" << std::endl;
            break;
        case ERROR_NETLIST_EMPTY:
            std::cout << "ATPG failed since no netlist has been provided" << std::endl;
            break;
    }
}

// Return a copy of all IDs in a NetList
std::vector<int> GetIDList(std::vector<ATPGGate*> netList) {
    std::vector<int> resultIDList;
    if (netList.empty()) {
        return resultIDList;
    }
    for (int i = 0; i < netList.size(); i++) {
        resultIDList.push_back(netList.at(i)->GetID());
    }
    return resultIDList;
}

// Return a copy of all IDs in a NetList
std::vector<int> GetIDList(std::vector<ATPGWire*> netList) {
    std::vector<int> resultIDList;
    if (netList.empty()) {
        return resultIDList;
    }
    for (int i = 0; i < netList.size(); i++) {
        resultIDList.push_back(netList.at(i)->GetID());
    }
    return resultIDList;
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
