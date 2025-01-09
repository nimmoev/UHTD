#ifndef ATPG_H
#define ATPG_H

#include <algorithm>
#include <map>
#include <stack>

#include "BasicGateLib/BasicGateLib.h"
#include "Error.h"
#include "UHTDClasses.h"

enum StuckAtFault {SAF0 = 0, SAF1 = 1};

// Returns a bool representing if a Gate is supported in the ATPG feature
const std::map<GateType, bool> ATPGSupportedTypes = {
    {GATETYPE_INV, true},
    {GATETYPE_AND, true},
    {GATETYPE_OR, true},
    {GATETYPE_NAND, true},
    {GATETYPE_NOR, true},
    {GATETYPE_XOR, false},
    {GATETYPE_XNOR, false},
    {GATETYPE_UNDEF, false},
};

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
int ATPGCase(ATPGWire* wire, WireState errorVal, std::vector<ATPGWire*> inputWireList, std::vector<ATPGWire*> outputWireList, std::string &result);
int Justify(ATPGWire* wire, WireState errorVal);
bool JustifyEdgeCase(ATPGGate* inputGate, std::vector<ATPGWire*> inputGateVector, WireState errorVal, int &error);
int Propogate(ATPGWire* wire);
bool PropogateEdgeCase(ATPGGate* outputGate, WireState wireState, int &error);
std::string CreateResult(std::vector<ATPGWire*> wireList);
std::vector<std::string> CreateFullResultVector(std::vector<std::string> tagVector, std::vector<std::string> resultVector);
std::vector<std::string> CreateMinimizedResultVector(std::vector<std::string> tagVector, std::vector<std::string> resultVector);
void ATPGClearWireState(ATPGWire* wire);
void ATPGCleanupNetList(std::vector<ATPGGate*> &gateList, std::vector<ATPGWire*> &wireList, std::vector<Node*> *originalNetList = nullptr);
void ATPGResult(int error, std::vector<std::string> fullResultVector, std::vector<std::string> minimizedResultVector);

#endif