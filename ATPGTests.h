#ifndef ATPGTESTS_H
#define ATPGTESTS_H

#include <vector>

#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "ATPG.h"
#include "Error.h"

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to ATPG_UnitTests in source file as a UnitTest

extern std::vector<UnitTest> ATPG_UnitTests;
extern UnitTestList ATPG_UTL;

void ATPGTransferNetList_ShouldSucceed();
void ATPGTransferNetList_WireListShouldMatch();
void ATPGTransferNetList_InputWireListShouldMatch();
void ATPGTransferNetList_OutputWireListShouldMatch();
void ATPGTransferNetList_ShouldBeErrorNetListEmpty();
void ATPGTransferNetList_VerifyGateInputConnections();
void ATPGTransferNetList_VerifyGateOutputConnection();
void ATPGTransferNetList_VerifyWireInputConnections();
void ATPGTransferNetList_VerifyWireInputNullConnections();
void ATPGTransferNetList_VerifyWireOutputConnections();
void ATPGTransferNetList_VerifyWireOutputNullConnections();
void ATPGTransferNetList_ShouldFailXOR();
void ATPGTransferNetList_ShouldFailXNOR();
void ATPGTransferNetList_ShouldFailUNDEF();
void Justify_ShouldFailNullptr();
void Justify_WireHasNoInputs();
void Justify_ShouldFailControlled();
void JustifyINV_OutputOFF_InputShouldMatch();
void JustifyINV_OutputOFF_OutputShouldMatch();
void JustifyINV_OutputON_InputShouldMatch();
void JustifyINV_OutputON_OutputShouldMatch();
void Justify2InputAND_OutputOFF_InputAShouldMatch();
void Justify2InputAND_OutputOFF_InputBShouldMatch();
void Justify2InputAND_OutputOFF_OutputShouldMatch();
void Justify2InputAND_OutputON_InputAShouldMatch();
void Justify2InputAND_OutputON_InputBShouldMatch();
void Justify2InputAND_OutputON_OutputShouldMatch();
void Justify2InputOR_OutputOFF_InputAShouldMatch();
void Justify2InputOR_OutputOFF_InputBShouldMatch();
void Justify2InputOR_OutputOFF_OutputShouldMatch();
void Justify2InputOR_OutputON_InputAShouldMatch();
void Justify2InputOR_OutputON_InputBShouldMatch();
void Justify2InputOR_OutputON_OutputShouldMatch();
void Justify2InputNAND_OutputOFF_InputAShouldMatch();
void Justify2InputNAND_OutputOFF_InputBShouldMatch();
void Justify2InputNAND_OutputOFF_OutputShouldMatch();
void Justify2InputNAND_OutputON_InputAShouldMatch();
void Justify2InputNAND_OutputON_InputBShouldMatch();
void Justify2InputNAND_OutputON_OutputShouldMatch();
void Justify2InputNOR_OutputOFF_InputAShouldMatch();
void Justify2InputNOR_OutputOFF_InputBShouldMatch();
void Justify2InputNOR_OutputOFF_OutputShouldMatch();
void Justify2InputNOR_OutputON_InputAShouldMatch();
void Justify2InputNOR_OutputON_InputBShouldMatch();
void Justify2InputNOR_OutputON_OutputShouldMatch();
void Propogate_ShouldFailNullptr();
void Propogate_WireHasNoOutputs();
void PropogateINV_InputOFF_InputShouldMatch();
void PropogateINV_InputOFF_OutputShouldMatch();
void PropogateINV_InputON_InputShouldMatch();
void PropogateINV_InputON_OutputShouldMatch();
void Propogate2InputAND_InputAOFF_InputAShouldMatch();
void Propogate2InputAND_InputAOFF_InputBShouldMatch();
void Propogate2InputAND_InputAOFF_OutputShouldMatch();
void Propogate2InputAND_InputAON_InputAShouldMatch();
void Propogate2InputAND_InputAON_InputBShouldMatch();
void Propogate2InputAND_InputAON_OutputShouldMatch();
void Propogate2InputAND_InputBOFF_InputAShouldMatch();
void Propogate2InputAND_InputBOFF_InputBShouldMatch();
void Propogate2InputAND_InputBOFF_OutputShouldMatch();
void Propogate2InputAND_InputBON_InputAShouldMatch();
void Propogate2InputAND_InputBON_InputBShouldMatch();
void Propogate2InputAND_InputBON_OutputShouldMatch();
void Propogate2InputOR_InputAOFF_InputAShouldMatch();
void Propogate2InputOR_InputAOFF_InputBShouldMatch();
void Propogate2InputOR_InputAOFF_OutputShouldMatch();
void Propogate2InputOR_InputAON_InputAShouldMatch();
void Propogate2InputOR_InputAON_InputBShouldMatch();
void Propogate2InputOR_InputAON_OutputShouldMatch();
void Propogate2InputOR_InputBOFF_InputAShouldMatch();
void Propogate2InputOR_InputBOFF_InputBShouldMatch();
void Propogate2InputOR_InputBOFF_OutputShouldMatch();
void Propogate2InputOR_InputBON_InputAShouldMatch();
void Propogate2InputOR_InputBON_InputBShouldMatch();
void Propogate2InputOR_InputBON_OutputShouldMatch();
void Propogate2InputNAND_InputAOFF_InputAShouldMatch();
void Propogate2InputNAND_InputAOFF_InputBShouldMatch();
void Propogate2InputNAND_InputAOFF_OutputShouldMatch();
void Propogate2InputNAND_InputAON_InputAShouldMatch();
void Propogate2InputNAND_InputAON_InputBShouldMatch();
void Propogate2InputNAND_InputAON_OutputShouldMatch();
void Propogate2InputNAND_InputBOFF_InputAShouldMatch();
void Propogate2InputNAND_InputBOFF_InputBShouldMatch();
void Propogate2InputNAND_InputBOFF_OutputShouldMatch();
void Propogate2InputNAND_InputBON_InputAShouldMatch();
void Propogate2InputNAND_InputBON_InputBShouldMatch();
void Propogate2InputNAND_InputBON_OutputShouldMatch();
void Propogate2InputNOR_InputAOFF_InputAShouldMatch();
void Propogate2InputNOR_InputAOFF_InputBShouldMatch();
void Propogate2InputNOR_InputAOFF_OutputShouldMatch();
void Propogate2InputNOR_InputAON_InputAShouldMatch();
void Propogate2InputNOR_InputAON_InputBShouldMatch();
void Propogate2InputNOR_InputAON_OutputShouldMatch();
void Propogate2InputNOR_InputBOFF_InputAShouldMatch();
void Propogate2InputNOR_InputBOFF_InputBShouldMatch();
void Propogate2InputNOR_InputBOFF_OutputShouldMatch();
void Propogate2InputNOR_InputBON_InputAShouldMatch();
void Propogate2InputNOR_InputBON_InputBShouldMatch();
void Propogate2InputNOR_InputBON_OutputShouldMatch();
void ATPGCase_TestCase1();
void ATPGCase_TestCase2ASA0();
void ATPGCase_TestCase2ASA1();
void ATPGCase_TestCase2BSA0();
void ATPGCase_TestCase2BSA1();
void ATPGCase_TestCase2CSA0();
void ATPGCase_TestCase2CSA1();
void ATPGCase_TestCase2DSA0();
void ATPGCase_TestCase2DSA1();
void ATPGCase_TestCase2ESA0();
void ATPGCase_TestCase2ESA1();
void ATPGCase_TestCase2FSA0();
void ATPGCase_TestCase2FSA1();
void ATPGCase_TestCase2GSA0();
void ATPGCase_TestCase2GSA1();
void ATPGCase_TestCase2HSA0();
void ATPGCase_TestCase2HSA1();
void ATPGCase_TestCase2ISA0();
void ATPGCase_TestCase2ISA1();
void ATPGGenerateTestVectors_TestCase2_FullResultVectorShouldMatch();
void ATPGGenerateTestVectors_TestCase2_MinimizedResultVectorShouldMatch();
void ATPGGenerateTestVectors_TestCase3_FullResultVectorShouldMatch();
void ATPGGenerateTestVectors_TestCase3_MinimizedResultVectorShouldMatch();
void ATPGGenerateTestVectors_TestCase4_FullResultVectorShouldMatch();
void ATPGGenerateTestVectors_TestCase4_MinimizedResultVectorShouldMatch();

// Functions to instantiate a specific NetList to a certain test

void GetATPGINVNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGNANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPGNORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetTestCase2NetList(std::vector<Node*> &netList);
void GetATPGTestCase2NetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetTestCase3NetList(std::vector<Node*> &netList);
void GetTestCase4NetList(std::vector<Node*> &netList);

#endif
