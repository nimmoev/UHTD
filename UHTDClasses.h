#ifndef UHTDCLASSES_H
#define UHTDCLASSES_H

#include <string>
#include <vector>

#include "BasicGateLib/BasicGateLib.h"

class ATPGGate;
class ATPGWire;

enum WireState {WIRESTATE_OFF = 0, WIRESTATE_ON = 1, WIRESTATE_DC = 2, WIRESTATE_UNDEF = 3};

/// @brief  A class which offers a pointer to a Gate and a connection between a series of ATPGWires
class ATPGGate { 
protected:
    Gate* gate;
    std::vector<ATPGWire*> ATPGInputs;
    ATPGWire* ATPGOutput;

public:
    ATPGGate(Gate* gate);
    int GetID();
    std::string GetName();
    Gate* GetGate();
    GateType GetGateType();
    std::vector<ATPGWire*> GetInputs();
    ATPGWire* GetOutput();
    bool ConnectInput(ATPGWire* input);
    bool ConnectOutput(ATPGWire* output);
    
};

/// @brief  A class which offers a pointer to a Wire, a WireState, and a connection between a series of ATPGGates
class ATPGWire { 
protected:
    Wire* wire;
    WireState wireState;
    std::vector<ATPGGate*> ATPGInputs;
    std::vector<ATPGGate*> ATPGOutputs;

public:
    ATPGWire(Wire* wire);
    int GetID();
    std::string GetName();
    Wire* GetWire();
    WireState GetWireState();
    void SetWireState(WireState wireState);
    std::vector<ATPGGate*> GetInputs();
    std::vector<ATPGGate*> GetOutputs();
    bool ConnectInput(ATPGGate* input);
    bool ConnectOutput(ATPGGate* output);

};

std::vector<int> GetIDList(std::vector<ATPGGate*> netList);
std::vector<int> GetIDList(std::vector<ATPGWire*> netList);

#endif
