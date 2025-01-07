#ifndef ATPG_H
#define ATPG_H

#include <algorithm>
#include <map>
#include <stack>

#include "BasicGateLib/BasicGateLib.h"
#include "Error.h"
#include "UHTDClasses.h"

enum StuckAtFault {SAF0 = 0, SAF1 = 1};

// Returns a bool representing if a Gate will invert the output
const std::map<GateType, bool> GateInverted = {
    {INV, false},
    {AND, false},
    {OR, false},
    {NAND, true},
    {NOR, true},
    {XOR, false},
    {XNOR, true},
    {UNDEF, false},
};

// Returns a WireState representing the value that will control a Gates output
const std::map<GateType, WireState> GateControlVal = { 
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
const std::map<GateType, WireState> GateStateWhileControlled = {
    {INV, WIRESTATE_UNSET},
    {AND, WIRESTATE_OFF},
    {OR, WIRESTATE_ON},
    {NAND, WIRESTATE_ON},
    {NOR, WIRESTATE_OFF},
    {XOR, WIRESTATE_UNSET},
    {XNOR, WIRESTATE_UNSET},
    {UNDEF, WIRESTATE_UNSET},
};

// Returns a WireState representing the given StuckAtFault
const std::map<StuckAtFault, WireState> StuckAtFaultWireState = {
    {SAF0, WIRESTATE_ON},
    {SAF1, WIRESTATE_OFF},
};

// Returns a WireState representing the inverted WireState
const std::map<WireState, WireState> WireStateInverted = {
    {WIRESTATE_OFF, WIRESTATE_ON},
    {WIRESTATE_ON, WIRESTATE_OFF},
    {WIRESTATE_DC, WIRESTATE_DC},
    {WIRESTATE_UNSET, WIRESTATE_UNSET},
};

// Returns a String representing the WireState
const std::map<WireState, std::string> WireStateString = {
    {WIRESTATE_OFF, "0"},
    {WIRESTATE_ON, "1"},
    {WIRESTATE_DC, "X"},
    {WIRESTATE_UNSET, "F"},
};

int ATPGEntry(std::vector<Node*> netList, std::vector<std::string> &fullResultVector, std::vector<std::string> &minimizedResultVector);
int ATPGTransferNetList(std::vector<Node*> netList, std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<ATPGWire*> &inputWireList, std::vector<ATPGWire*> &outputWireList);
void ATPGClearWireState(ATPGWire* wire);
void ATPGCleanupNetList(std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<Node*> *originalNetList = nullptr);
int ATPGCase(ATPGWire* wire, WireState errorVal, std::vector<ATPGWire*> inputWireList, std::vector<ATPGWire*> outputWireList, std::string &result);
int Justify(ATPGWire* wire, WireState errorVal);
int Propogate(ATPGWire* wire);
void ATPGResult(int error, std::vector<std::string> fullResultVector, std::vector<std::string> minimizedResultVector);

ATPGGate* GetATPGGateFromMap(std::map<int, ATPGGate*> gateMap, int id);
ATPGWire* GetATPGWireFromMap(std::map<int, ATPGWire*> wireMap, int id);

#endif