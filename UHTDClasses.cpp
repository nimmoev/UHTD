#include "UHTDClasses.h"

ATPGGate::ATPGGate(Gate* gate) {
    this->gate = gate;
    this->ATPGInputs.clear();
    this->ATPGOutput = nullptr;
}

// Return the unique integer ID assigned to this object's Gate
int ATPGGate::GetID() { 
    if (this->gate == nullptr) {
        return -1;
    }
    return this->gate->GetID();
}

// Return the name assigned to this object's Gate
std::string ATPGGate::GetName() { 
    if (this->gate == nullptr) { 
        return "";
    }
    return this->gate->GetName();
}

// Return the Gate used to instantiate this object
Gate* ATPGGate::GetGate() { 
    return this->gate;
}

// Return an enum representing the GateType of the ATPGGate
GateType ATPGGate::GetGateType() { 
    return this->gate->GetGateType();
}

// Return a copy of all input ATPGWires in the ATPGGate
std::vector<ATPGWire*> ATPGGate::GetInputs() { 
    return this->ATPGInputs;
}

// Return an address of the output ATPGWire in the Gate
ATPGWire* ATPGGate::GetOutput() { 
    return this->ATPGOutput;
}

// Append an input ATPGWire to this ATPGGate's input vector
bool ATPGGate::ConnectInput(ATPGWire* input) {
    // Will probably be done prior, but here for safety reasons
    if (input == nullptr) {
        return false;
    }
    this->ATPGInputs.push_back(input);
    return true;
}

// Set this ATPGGate's output to an input ATPGWire
bool ATPGGate::ConnectOutput(ATPGWire* output) { 
    // Will probably be done prior, but here for safety reasons
    if (output == nullptr) { 
        return false;
    }
    this->ATPGOutput = output;
    return true;
}

ATPGWire::ATPGWire(Wire* wire) { 
    this->wireState = WIRESTATE_UNDEF;
    this->wire = wire;
    this->ATPGInputs.clear();
    this->ATPGOutputs.clear();
}

// Return the unique integer ID assigned to this object's Wire
int ATPGWire::GetID() { 
    if (this->wire == nullptr) {
        return -1;
    }
    return this->wire->GetID();
}

// Return the name representing this object's Wire
std::string ATPGWire::GetName() {
    if (this->wire == nullptr) {
        return "";
    }
    return this->wire->GetName();
}

// Return the Wire used to instantiate this object
Wire* ATPGWire::GetWire() { 
    return this->wire;
}

// Return an enum representing the WireState of the ATPGWire
WireState ATPGWire::GetWireState() { 
    return this->wireState;
}

// Set this Wire's wireState
void ATPGWire::SetWireState(WireState wireState) { 
    if (this->wireState == wireState) { 
        return;
    }
    this->wireState = wireState;
}

// Return a copy of all input ATPGGate in the ATPGWire
std::vector<ATPGGate*> ATPGWire::GetInputs() { 
    return this->ATPGInputs;
}

// Return a copy of all output ATPGGate in the ATPGWire
std::vector<ATPGGate*> ATPGWire::GetOutputs() { 
    return this->ATPGOutputs;
}

// Append an input Gate to this Wire's input vector. 
bool ATPGWire::ConnectInput(ATPGGate* input) {
    // Will probably be done prior, but here for safety reasons
    if (input == nullptr) { 
        return false;
    }
    this->ATPGInputs.push_back(input);
    return true;
}

// Append an output Gate to this Wire's output vector.
bool ATPGWire::ConnectOutput(ATPGGate* output) { 
    // Will probably be done prior, but here for safety reasons
    if (output == nullptr) { 
        return false;
    }
    this->ATPGOutputs.push_back(output);
    return true;
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
