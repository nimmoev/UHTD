#include "ATPG.h"

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
            result = ATPGCase(wireList.at(i), j, resultStr);
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

// Generate a Test Vector given a Wire to set and an error value
//  wire - Pointer to the Wire to use
//  errorVal - the value that the Wire is stuck at
int ATPGCase(ATPGWire* wire, int errorVal, std::string &result) {
    int error = ERROR_NONE;
    error = Justify(wire, errorVal);
    if (error != ERROR_NONE) { 
        return error;
    }

    error = Propogate(wire, errorVal);
    if (error != ERROR_NONE) { 
        return error;
    }


    return error;
}


int Justify(ATPGWire* wire, int errorVal) { 
    int error = ERROR_NONE;
    
    // Firstly, check for the matching control value 

    return error;
}

int Propogate(ATPGWire* wire, int errorVal) { 
    int error = ERROR_NONE;
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
