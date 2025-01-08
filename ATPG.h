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
    {GATETYPE_INV, false},
    {GATETYPE_AND, false},
    {GATETYPE_OR, false},
    {GATETYPE_NAND, true},
    {GATETYPE_NOR, true},
    {GATETYPE_XOR, false},
    {GATETYPE_XNOR, true},
    {GATETYPE_UNDEF, false},
};

// Returns a WireState representing the value that will control a Gates output
const std::map<GateType, WireState> GateControlVal = { 
    {GATETYPE_INV, WIRESTATE_UNDEF},
    {GATETYPE_AND, WIRESTATE_OFF},
    {GATETYPE_OR, WIRESTATE_ON},
    {GATETYPE_NAND, WIRESTATE_OFF},
    {GATETYPE_NOR, WIRESTATE_ON},
    {GATETYPE_XOR, WIRESTATE_UNDEF},
    {GATETYPE_XNOR, WIRESTATE_UNDEF},
    {GATETYPE_UNDEF, WIRESTATE_UNDEF},
};

// Returns a WireState representing the WireState of the Gate while the Gate is controlled
const std::map<GateType, WireState> GateStateWhileControlled = {
    {GATETYPE_INV, WIRESTATE_UNDEF},
    {GATETYPE_AND, WIRESTATE_OFF},
    {GATETYPE_OR, WIRESTATE_ON},
    {GATETYPE_NAND, WIRESTATE_ON},
    {GATETYPE_NOR, WIRESTATE_OFF},
    {GATETYPE_XOR, WIRESTATE_UNDEF},
    {GATETYPE_XNOR, WIRESTATE_UNDEF},
    {GATETYPE_UNDEF, WIRESTATE_UNDEF},
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
    {WIRESTATE_UNDEF, WIRESTATE_UNDEF},
};

// Returns a String representing the WireState
const std::map<WireState, std::string> WireStateString = {
    {WIRESTATE_OFF, "0"},
    {WIRESTATE_ON, "1"},
    {WIRESTATE_DC, "X"},
    {WIRESTATE_UNDEF, "F"},
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