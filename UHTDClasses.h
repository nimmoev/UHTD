#ifndef UHTDCLASSES_H
#define UHTDCLASSES_H

#include <vector>

#include "BasicGateLib/BasicGateLib.h"

class ATPGGate;
class ATPGWire;

enum WireState {WIRESTATE_OFF = 0, WIRESTATE_ON = 1, WIRESTATE_DC = 2, WIRESTATE_UNDEF = 3};

class ATPGGate { 
protected:
    Gate* gate;
    std::vector<ATPGWire*> ATPGInputs;
    ATPGWire* ATPGOutput;

public:
    ATPGGate(Gate* gate);
    Gate* GetGate();
    int GetID();
    GateType GetGateType();
    std::vector<ATPGWire*> GetInputs();
    ATPGWire* GetOutput();
    bool ConnectInput(ATPGWire* input);
    bool ConnectOutput(ATPGWire* output);
    
};

class ATPGWire { 
protected:
    WireState wireState;
    Wire* wire;
    std::vector<ATPGGate*> ATPGInputs;
    std::vector<ATPGGate*> ATPGOutputs;

public:
    ATPGWire(Wire* wire);
    Wire* GetWire();
    int GetID();
    std::vector<ATPGGate*> GetInputs();
    std::vector<ATPGGate*> GetOutputs();
    bool ConnectInput(ATPGGate* input);
    bool ConnectOutput(ATPGGate* output);
    WireState GetState();
    void SetState(WireState wireState);

};

std::vector<int> GetIDList(std::vector<ATPGGate*> netList);
std::vector<int> GetIDList(std::vector<ATPGWire*> netList);

#endif
