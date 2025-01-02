#ifndef ATPGTESTS_H
#define ATPGTESTS_H

#include <vector>

#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "ATPG.h"

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to TVTestFunctionVector in source file
//  4. Append a string of the same name as the test function to TVTestNameVector in source file

extern std::vector<void (*)()> ATPGTestFunctionVector;
extern std::vector<std::string> ATPGTestNameVector;
extern UnitTestList ATPG_UTL;
void None_CopyNetListToATPG_ShouldSucceed();
void None_CopyNetListToATPG_WireListShouldMatch();
void None_CopyNetListToATPG_InputWireListShouldMatch();
void None_CopyNetListToATPG_OutputWireListShouldMatch();
void None_CopyNetListToATPG_ShouldBeErrorNetListEmpty();
void None_CopyNetListToATPG_VerifyGateInputConnections();
void None_CopyNetListToATPG_VerifyGateOutputConnection();
void None_CopyNetListToATPG_VerifyWireInputConnections();
void None_CopyNetListToATPG_VerifyWireInputNullConnections();
void None_CopyNetListToATPG_VerifyWireOutputConnections();
void None_CopyNetListToATPG_VerifyWireOutputNullConnections();

void ATPG_ATPGCase_TestCase1();

#endif
