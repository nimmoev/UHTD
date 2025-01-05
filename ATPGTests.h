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
void Propogate_ShouldFailNullptr();
void Propogate_WireHasNoOutputs();
void PropogateOFF_INVInputShouldMatch();
void PropogateOFF_INVOutputShouldMatch();
void PropogateON_INVInputShouldMatch();
void PropogateON_INVOutputShouldMatch();
void PropogateInputAOFF_ANDInputAShouldMatch();
void PropogateInputAOFF_ANDInputBShouldMatch();
void PropogateInputAOFF_ANDOutputShouldMatch();
void PropogateInputAON_ANDInputAShouldMatch();
void PropogateInputAON_ANDInputBShouldMatch();
void PropogateInputAON_ANDOutputShouldMatch();
void PropogateInputBOFF_ANDInputAShouldMatch();
void PropogateInputBOFF_ANDInputBShouldMatch();
void PropogateInputBOFF_ANDOutputShouldMatch();
void PropogateInputBON_ANDInputAShouldMatch();
void PropogateInputBON_ANDInputBShouldMatch();
void PropogateInputBON_ANDOutputShouldMatch();
void PropogateInputAOFF_ORInputAShouldMatch();
void PropogateInputAOFF_ORInputBShouldMatch();
void PropogateInputAOFF_OROutputShouldMatch();
void PropogateInputAON_ORInputAShouldMatch();
void PropogateInputAON_ORInputBShouldMatch();
void PropogateInputAON_OROutputShouldMatch();
void PropogateInputBOFF_ORInputAShouldMatch();
void PropogateInputBOFF_ORInputBShouldMatch();
void PropogateInputBOFF_OROutputShouldMatch();
void PropogateInputBON_ORInputAShouldMatch();
void PropogateInputBON_ORInputBShouldMatch();
void PropogateInputBON_OROutputShouldMatch();
void PropogateInputAOFF_NANDInputAShouldMatch();
void PropogateInputAOFF_NANDInputBShouldMatch();
void PropogateInputAOFF_NANDOutputShouldMatch();
void PropogateInputAON_NANDInputAShouldMatch();
void PropogateInputAON_NANDInputBShouldMatch();
void PropogateInputAON_NANDOutputShouldMatch();
void PropogateInputBOFF_NANDInputAShouldMatch();
void PropogateInputBOFF_NANDInputBShouldMatch();
void PropogateInputBOFF_NANDOutputShouldMatch();
void PropogateInputBON_NANDInputAShouldMatch();
void PropogateInputBON_NANDInputBShouldMatch();
void PropogateInputBON_NANDOutputShouldMatch();
void PropogateInputAOFF_NORInputAShouldMatch();
void PropogateInputAOFF_NORInputBShouldMatch();
void PropogateInputAOFF_NOROutputShouldMatch();
void PropogateInputAON_NORInputAShouldMatch();
void PropogateInputAON_NORInputBShouldMatch();
void PropogateInputAON_NOROutputShouldMatch();
void PropogateInputBOFF_NORInputAShouldMatch();
void PropogateInputBOFF_NORInputBShouldMatch();
void PropogateInputBOFF_NOROutputShouldMatch();
void PropogateInputBON_NORInputAShouldMatch();
void PropogateInputBON_NORInputBShouldMatch();
void PropogateInputBON_NOROutputShouldMatch();

void ATPGCase_TestCase1();

void GetATPGINVNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGANDNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGORNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGNANDNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGNORNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);

#endif
