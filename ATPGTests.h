#ifndef ATPGTESTS_H
#define ATPGTESTS_H

#include <vector>

#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "ATPG.h"
#include "Error.h"

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
void CopyNetListToATPG_ShouldFailXOR();
void CopyNetListToATPG_ShouldFailXNOR();
void CopyNetListToATPG_ShouldFailUNDEF();
void GetATPGGateFromMap_ShouldMatch();
void GetATPGGateFromMap_LastItemShouldMatch();
void GetATPGGateFromMap_ShouldBeNullptr();
void GetATPGWireFromMap_ShouldMatch();
void GetATPGWireFromMap_LastItemShouldMatch();
void GetATPGWireFromMap_ShouldBeNullptr();
void Justify_ShouldFailNullptr();
void Justify_WireHasNoInputs();
void Justify_ShouldFailControlled();
void JustifyOFF_INVInputShouldMatch();
void JustifyOFF_INVOutputShouldMatch();
void JustifyON_INVInputShouldMatch();
void JustifyON_INVOutputShouldMatch();
void JustifyOFF_ANDInputAShouldMatch();
void JustifyOFF_ANDInputBShouldMatch();
void JustifyOFF_ANDOutputShouldMatch();
void JustifyON_ANDInputAShouldMatch();
void JustifyON_ANDInputBShouldMatch();
void JustifyON_ANDOutputShouldMatch();
void JustifyOFF_ORInputAShouldMatch();
void JustifyOFF_ORInputBShouldMatch();
void JustifyOFF_OROutputShouldMatch();
void JustifyON_ORInputAShouldMatch();
void JustifyON_ORInputBShouldMatch();
void JustifyON_OROutputShouldMatch();
void JustifyOFF_NANDInputAShouldMatch();
void JustifyOFF_NANDInputBShouldMatch();
void JustifyOFF_NANDOutputShouldMatch();
void JustifyON_NANDInputAShouldMatch();
void JustifyON_NANDInputBShouldMatch();
void JustifyON_NANDOutputShouldMatch();
void JustifyOFF_NORInputAShouldMatch();
void JustifyOFF_NORInputBShouldMatch();
void JustifyOFF_NOROutputShouldMatch();
void JustifyON_NORInputAShouldMatch();
void JustifyON_NORInputBShouldMatch();
void JustifyON_NOROutputShouldMatch();
void ATPGCase_TestCase1();

#endif
