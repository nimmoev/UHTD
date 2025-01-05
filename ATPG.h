#ifndef ATPG_H
#define ATPG_H

#include <algorithm>
#include <map>
#include <stack>

#include "BasicGateLib/BasicGateLib.h"
#include "Error.h"

enum WireState {WIRESTATE_OFF = 0, WIRESTATE_ON = 1, WIRESTATE_DC = 2, WIRESTATE_UNSET = 3};
extern std::map<GateType, bool> GateInverted;
extern std::map<WireState, WireState> WireStateInverted;
extern std::map<GateType, WireState> GateControlVal;
extern std::map<GateType, WireState> GateStateWhileControlled;

class ATPGGate;
class ATPGWire;

int ATPGEntry(std::vector<Node*> netList);
int CopyNetListToATPG(std::vector<Node*> netList, std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<ATPGWire*> &inputWireList, std::vector<ATPGWire*> &outputWireList);
void CleanupATPGNetList(std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList);
int ATPGCase(ATPGWire* wire, WireState errorVal, std::string &result);
int Justify(ATPGWire* wire, WireState errorVal);
int Propogate(ATPGWire* wire);
void ATPGResult(int error);

class ATPGGate { 
protected:
    Gate* gate;
    std::vector<ATPGWire*> ATPGInputs;
    ATPGWire* ATPGOutput;

public:
    ATPGGate(Gate* gate) {
        this->gate = gate;
        this->ATPGInputs.clear();
        this->ATPGOutput = nullptr;
    }
    // Return the Gate used to instantiate this object
    Gate* GetGate() { 
        return this->gate;
    }
    // Return the unique integer ID assigned to this object
    int GetID() { 
        if (this->gate == nullptr) {
            return -1;
        }
        return this->gate->GetID();
    }
    // Return an integer representing the GateType of the ATPGGate
    GateType GetGateType() { 
        return this->gate->GetGateType();
    }
    // Return a copy of all input ATPGWires in the ATPGGate
    std::vector<ATPGWire*> GetInputs() { 
        return this->ATPGInputs;
    }
    // Return an address of the output ATPGWire in the Gate
    ATPGWire* GetOutput() { 
        return this->ATPGOutput;
    }
    // Append an input ATPGWire to this ATPGGate's input vector.
    inline bool _ConnectInput(ATPGWire* input) {
        // Will probably be done prior, but here for safety reasons
        if (input == nullptr) {
            return false;
        }
        this->ATPGInputs.push_back(input);
        return true;
    }

    // Set this ATPGGate's output to an input ATPGWire.
    inline bool _ConnectOutput(ATPGWire* output) { 
        // Will probably be done prior, but here for safety reasons
        if (output == nullptr) { 
            return false;
        }
        this->ATPGOutput = output;
        return true;
    }
    
};

class ATPGWire { 
protected:
    WireState wireState;
    Wire* wire;
    std::vector<ATPGGate*> ATPGInputs;
    std::vector<ATPGGate*> ATPGOutputs;

public:
    ATPGWire(Wire* wire) { 
        this->wireState = WIRESTATE_UNSET;
        this->wire = wire;
        this->ATPGInputs.clear();
        this->ATPGOutputs.clear();
    }
    // Return the Wire used to instantiate this object
    Wire* GetWire() { 
        return this->wire;
    }
    // Return the unique integer ID assigned to this object
    int GetID() { 
        if (this->wire == nullptr) {
            return -1;
        }
        return this->wire->GetID();
    }
    // Return a copy of all input ATPGGate in the ATPGWire
    std::vector<ATPGGate*> GetInputs() { 
        return this->ATPGInputs;
    }
    // Return a copy of all output ATPGGate in the ATPGWire
    std::vector<ATPGGate*> GetOutputs() { 
        return this->ATPGOutputs;
    }
    // Append an input Gate to this Wire's input vector. 
    inline bool _ConnectInput(ATPGGate* input) {
        // Will probably be done prior, but here for safety reasons
        if (input == nullptr) { 
            return false;
        }
        this->ATPGInputs.push_back(input);
        return true;
    }

    // Append an output Gate to this Wire's output vector.
    inline bool _ConnectOutput(ATPGGate* output) { 
        // Will probably be done prior, but here for safety reasons
        if (output == nullptr) { 
            return false;
        }
        this->ATPGOutputs.push_back(output);
        return true;
    }
    WireState GetState() { 
        return this->wireState;
    }
    void SetState(WireState wireState) { 
        this->wireState = wireState;
    }
};

std::vector<int> GetIDList(std::vector<ATPGGate*> netList);
std::vector<int> GetIDList(std::vector<ATPGWire*> netList);
ATPGGate* GetATPGGateFromMap(std::map<int, ATPGGate*> gateMap, int id);
ATPGWire* GetATPGWireFromMap(std::map<int, ATPGWire*> wireMap, int id);

#endif