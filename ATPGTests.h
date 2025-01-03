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
void CopyNetListToATPG_ShouldSucceed();
void CopyNetListToATPG_WireListShouldMatch();
void CopyNetListToATPG_InputWireListShouldMatch();
void CopyNetListToATPG_OutputWireListShouldMatch();
void CopyNetListToATPG_ShouldBeErrorNetListEmpty();
void CopyNetListToATPG_VerifyGateInputConnections();
void CopyNetListToATPG_VerifyGateOutputConnection();
void CopyNetListToATPG_VerifyWireInputConnections();
void CopyNetListToATPG_VerifyWireInputNullConnections();
void CopyNetListToATPG_VerifyWireOutputConnections();
void CopyNetListToATPG_VerifyWireOutputNullConnections();
void GetATPGGateFromMap_ShouldMatch();
void GetATPGGateFromMap_LastItemShouldMatch();
void GetATPGGateFromMap_ShouldBeNullptr();
void GetATPGWireFromMap_ShouldMatch();
void GetATPGWireFromMap_LastItemShouldMatch();
void GetATPGWireFromMap_ShouldBeNullptr();

void ATPGCase_TestCase1();

#endif
