#ifndef ATPGTESTS_H
#define ATPGTESTS_H

#include <string>
#include <vector>

#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "ATPG.h"
#include "Error.h"

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to ATPG_UnitTests in source file as a UnitTest

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
void ATPGJustify_ShouldFailNullptr();
void ATPGJustify_WireHasNoInputs();
void ATPGJustify_ShouldFailControlled();
void ATPGJustifyINV_OutputOFF_InputShouldMatch();
void ATPGJustifyINV_OutputOFF_OutputShouldMatch();
void ATPGJustifyINV_OutputON_InputShouldMatch();
void ATPGJustifyINV_OutputON_OutputShouldMatch();
void ATPGJustify2InputAND_OutputOFF_InputAShouldMatch();
void ATPGJustify2InputAND_OutputOFF_InputBShouldMatch();
void ATPGJustify2InputAND_OutputOFF_OutputShouldMatch();
void ATPGJustify2InputAND_OutputON_InputAShouldMatch();
void ATPGJustify2InputAND_OutputON_InputBShouldMatch();
void ATPGJustify2InputAND_OutputON_OutputShouldMatch();
void ATPGJustify2InputOR_OutputOFF_InputAShouldMatch();
void ATPGJustify2InputOR_OutputOFF_InputBShouldMatch();
void ATPGJustify2InputOR_OutputOFF_OutputShouldMatch();
void ATPGJustify2InputOR_OutputON_InputAShouldMatch();
void ATPGJustify2InputOR_OutputON_InputBShouldMatch();
void ATPGJustify2InputOR_OutputON_OutputShouldMatch();
void ATPGJustify2InputNAND_OutputOFF_InputAShouldMatch();
void ATPGJustify2InputNAND_OutputOFF_InputBShouldMatch();
void ATPGJustify2InputNAND_OutputOFF_OutputShouldMatch();
void ATPGJustify2InputNAND_OutputON_InputAShouldMatch();
void ATPGJustify2InputNAND_OutputON_InputBShouldMatch();
void ATPGJustify2InputNAND_OutputON_OutputShouldMatch();
void ATPGJustify2InputNOR_OutputOFF_InputAShouldMatch();
void ATPGJustify2InputNOR_OutputOFF_InputBShouldMatch();
void ATPGJustify2InputNOR_OutputOFF_OutputShouldMatch();
void ATPGJustify2InputNOR_OutputON_InputAShouldMatch();
void ATPGJustify2InputNOR_OutputON_InputBShouldMatch();
void ATPGJustify2InputNOR_OutputON_OutputShouldMatch();
void ATPGPropogate_ShouldFailNullptr();
void ATPGPropogate_WireHasNoOutputs();
void ATPGPropogateINV_InputOFF_InputShouldMatch();
void ATPGPropogateINV_InputOFF_OutputShouldMatch();
void ATPGPropogateINV_InputON_InputShouldMatch();
void ATPGPropogateINV_InputON_OutputShouldMatch();
void ATPGPropogate2InputAND_InputAOFF_InputAShouldMatch();
void ATPGPropogate2InputAND_InputAOFF_InputBShouldMatch();
void ATPGPropogate2InputAND_InputAOFF_OutputShouldMatch();
void ATPGPropogate2InputAND_InputAON_InputAShouldMatch();
void ATPGPropogate2InputAND_InputAON_InputBShouldMatch();
void ATPGPropogate2InputAND_InputAON_OutputShouldMatch();
void ATPGPropogate2InputAND_InputBOFF_InputAShouldMatch();
void ATPGPropogate2InputAND_InputBOFF_InputBShouldMatch();
void ATPGPropogate2InputAND_InputBOFF_OutputShouldMatch();
void ATPGPropogate2InputAND_InputBON_InputAShouldMatch();
void ATPGPropogate2InputAND_InputBON_InputBShouldMatch();
void ATPGPropogate2InputAND_InputBON_OutputShouldMatch();
void ATPGPropogate2InputOR_InputAOFF_InputAShouldMatch();
void ATPGPropogate2InputOR_InputAOFF_InputBShouldMatch();
void ATPGPropogate2InputOR_InputAOFF_OutputShouldMatch();
void ATPGPropogate2InputOR_InputAON_InputAShouldMatch();
void ATPGPropogate2InputOR_InputAON_InputBShouldMatch();
void ATPGPropogate2InputOR_InputAON_OutputShouldMatch();
void ATPGPropogate2InputOR_InputBOFF_InputAShouldMatch();
void ATPGPropogate2InputOR_InputBOFF_InputBShouldMatch();
void ATPGPropogate2InputOR_InputBOFF_OutputShouldMatch();
void ATPGPropogate2InputOR_InputBON_InputAShouldMatch();
void ATPGPropogate2InputOR_InputBON_InputBShouldMatch();
void ATPGPropogate2InputOR_InputBON_OutputShouldMatch();
void ATPGPropogate2InputNAND_InputAOFF_InputAShouldMatch();
void ATPGPropogate2InputNAND_InputAOFF_InputBShouldMatch();
void ATPGPropogate2InputNAND_InputAOFF_OutputShouldMatch();
void ATPGPropogate2InputNAND_InputAON_InputAShouldMatch();
void ATPGPropogate2InputNAND_InputAON_InputBShouldMatch();
void ATPGPropogate2InputNAND_InputAON_OutputShouldMatch();
void ATPGPropogate2InputNAND_InputBOFF_InputAShouldMatch();
void ATPGPropogate2InputNAND_InputBOFF_InputBShouldMatch();
void ATPGPropogate2InputNAND_InputBOFF_OutputShouldMatch();
void ATPGPropogate2InputNAND_InputBON_InputAShouldMatch();
void ATPGPropogate2InputNAND_InputBON_InputBShouldMatch();
void ATPGPropogate2InputNAND_InputBON_OutputShouldMatch();
void ATPGPropogate2InputNOR_InputAOFF_InputAShouldMatch();
void ATPGPropogate2InputNOR_InputAOFF_InputBShouldMatch();
void ATPGPropogate2InputNOR_InputAOFF_OutputShouldMatch();
void ATPGPropogate2InputNOR_InputAON_InputAShouldMatch();
void ATPGPropogate2InputNOR_InputAON_InputBShouldMatch();
void ATPGPropogate2InputNOR_InputAON_OutputShouldMatch();
void ATPGPropogate2InputNOR_InputBOFF_InputAShouldMatch();
void ATPGPropogate2InputNOR_InputBOFF_InputBShouldMatch();
void ATPGPropogate2InputNOR_InputBOFF_OutputShouldMatch();
void ATPGPropogate2InputNOR_InputBON_InputAShouldMatch();
void ATPGPropogate2InputNOR_InputBON_InputBShouldMatch();
void ATPGPropogate2InputNOR_InputBON_OutputShouldMatch();
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

std::vector<Node*> GetATPGTransferTestCaseNetList(GateType gateType = GATETYPE_OR);
void GetATPGINVNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
std::vector<Node*> Get2InputGate(GateType gateType);
void GetATPG2InputANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPG2InputORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPG2InputNANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
void GetATPG2InputNORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
std::vector<Node*> GetTestCase1NetList();
std::vector<Node*> GetTestCase2NetList();
void GetATPGTestCase2NetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList);
std::vector<Node*> GetTestCase3NetList();
std::vector<Node*> GetTestCase4NetList();

#endif
