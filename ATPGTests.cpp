#include "ATPGTests.h"

UnitTestList ATPG_UTL("ATPG Unit Tests", std::vector<UnitTest>({
    UnitTest(ATPGTransferNetList_ShouldSucceed, "ATPGTransferNetList_ShouldSucceed"),
    UnitTest(ATPGTransferNetList_WireListShouldMatch, "ATPGTransferNetList_WireListShouldMatch"),
    UnitTest(ATPGTransferNetList_InputWireListShouldMatch, "ATPGTransferNetList_InputWireListShouldMatch"),
    UnitTest(ATPGTransferNetList_OutputWireListShouldMatch, "ATPGTransferNetList_OutputWireListShouldMatch"),
    UnitTest(ATPGTransferNetList_ShouldBeErrorNetListEmpty, "ATPGTransferNetList_ShouldBeErrorNetListEmpty"),
    UnitTest(ATPGTransferNetList_VerifyGateInputConnections, "ATPGTransferNetList_VerifyGateInputConnections"),
    UnitTest(ATPGTransferNetList_VerifyGateOutputConnection, "ATPGTransferNetList_VerifyGateOutputConnection"),
    UnitTest(ATPGTransferNetList_VerifyWireInputConnections, "ATPGTransferNetList_VerifyWireInputConnections"),
    UnitTest(ATPGTransferNetList_VerifyWireInputNullConnections, "ATPGTransferNetList_VerifyWireInputNullConnections"),
    UnitTest(ATPGTransferNetList_VerifyWireOutputConnections, "ATPGTransferNetList_VerifyWireOutputConnections"),
    UnitTest(ATPGTransferNetList_VerifyWireOutputNullConnections, "ATPGTransferNetList_VerifyWireOutputNullConnections"),
    UnitTest(ATPGTransferNetList_ShouldFailXOR, "ATPGTransferNetList_ShouldFailXOR"),
    UnitTest(ATPGTransferNetList_ShouldFailXNOR, "ATPGTransferNetList_ShouldFailXNOR"),
    UnitTest(ATPGTransferNetList_ShouldFailUNDEF, "ATPGTransferNetList_ShouldFailUNDEF"),
    UnitTest(ATPGJustify_ShouldFailNullptr, "ATPGJustify_ShouldFailNullptr"),
    UnitTest(ATPGJustify_WireHasNoInputs, "ATPGJustify_WireHasNoInputs"),
    UnitTest(ATPGJustify_ShouldFailControlled, "ATPGJustify_ShouldFailControlled"),
    UnitTest(ATPGJustifyINV_OutputOFF_InputShouldMatch, "ATPGJustifyINV_OutputOFF_InputShouldMatch"),
    UnitTest(ATPGJustifyINV_OutputOFF_OutputShouldMatch, "ATPGJustifyINV_OutputOFF_OutputShouldMatch"),
    UnitTest(ATPGJustifyINV_OutputON_InputShouldMatch, "ATPGJustifyINV_OutputON_InputShouldMatch"),
    UnitTest(ATPGJustifyINV_OutputON_OutputShouldMatch, "ATPGJustifyINV_OutputON_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputAND_OutputOFF_InputAShouldMatch, "ATPGJustify2InputAND_OutputOFF_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputAND_OutputOFF_InputBShouldMatch, "ATPGJustify2InputAND_OutputOFF_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputAND_OutputOFF_OutputShouldMatch, "ATPGJustify2InputAND_OutputOFF_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputAND_OutputON_InputAShouldMatch, "ATPGJustify2InputAND_OutputON_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputAND_OutputON_InputBShouldMatch, "ATPGJustify2InputAND_OutputON_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputAND_OutputON_OutputShouldMatch, "ATPGJustify2InputAND_OutputON_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputOR_OutputOFF_InputAShouldMatch, "ATPGJustify2InputOR_OutputOFF_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputOR_OutputOFF_InputBShouldMatch, "ATPGJustify2InputOR_OutputOFF_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputOR_OutputOFF_OutputShouldMatch, "ATPGJustify2InputOR_OutputOFF_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputOR_OutputON_InputAShouldMatch, "ATPGJustify2InputOR_OutputON_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputOR_OutputON_InputBShouldMatch, "ATPGJustify2InputOR_OutputON_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputOR_OutputON_OutputShouldMatch, "ATPGJustify2InputOR_OutputON_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputNAND_OutputOFF_InputAShouldMatch, "ATPGJustify2InputNAND_OutputOFF_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputNAND_OutputOFF_InputBShouldMatch, "ATPGJustify2InputNAND_OutputOFF_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputNAND_OutputOFF_OutputShouldMatch, "ATPGJustify2InputNAND_OutputOFF_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputNAND_OutputON_InputAShouldMatch, "ATPGJustify2InputNAND_OutputON_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputNAND_OutputON_InputBShouldMatch, "ATPGJustify2InputNAND_OutputON_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputNAND_OutputON_OutputShouldMatch, "ATPGJustify2InputNAND_OutputON_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputNOR_OutputOFF_InputAShouldMatch, "ATPGJustify2InputNOR_OutputOFF_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputNOR_OutputOFF_InputBShouldMatch, "ATPGJustify2InputNOR_OutputOFF_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputNOR_OutputOFF_OutputShouldMatch, "ATPGJustify2InputNOR_OutputOFF_OutputShouldMatch"),
    UnitTest(ATPGJustify2InputNOR_OutputON_InputAShouldMatch, "ATPGJustify2InputNOR_OutputON_InputAShouldMatch"),
    UnitTest(ATPGJustify2InputNOR_OutputON_InputBShouldMatch, "ATPGJustify2InputNOR_OutputON_InputBShouldMatch"),
    UnitTest(ATPGJustify2InputNOR_OutputON_OutputShouldMatch, "ATPGJustify2InputNOR_OutputON_OutputShouldMatch"),
    UnitTest(ATPGPropogate_ShouldFailNullptr, "ATPGPropogate_ShouldFailNullptr"),
    UnitTest(ATPGPropogate_WireHasNoOutputs, "ATPGPropogate_WireHasNoOutputs"),
    UnitTest(ATPGPropogateINV_InputOFF_InputShouldMatch, "ATPGPropogateINV_InputOFF_InputShouldMatch"),
    UnitTest(ATPGPropogateINV_InputOFF_OutputShouldMatch, "ATPGPropogateINV_InputOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogateINV_InputON_InputShouldMatch, "ATPGPropogateINV_InputON_InputShouldMatch"),
    UnitTest(ATPGPropogateINV_InputON_OutputShouldMatch, "ATPGPropogateINV_InputON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputAOFF_InputAShouldMatch, "ATPGPropogate2InputAND_InputAOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputAOFF_InputBShouldMatch, "ATPGPropogate2InputAND_InputAOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputAOFF_OutputShouldMatch, "ATPGPropogate2InputAND_InputAOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputAON_InputAShouldMatch, "ATPGPropogate2InputAND_InputAON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputAON_InputBShouldMatch, "ATPGPropogate2InputAND_InputAON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputAON_OutputShouldMatch, "ATPGPropogate2InputAND_InputAON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputBOFF_InputAShouldMatch, "ATPGPropogate2InputAND_InputBOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputBOFF_InputBShouldMatch, "ATPGPropogate2InputAND_InputBOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputBOFF_OutputShouldMatch, "ATPGPropogate2InputAND_InputBOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputBON_InputAShouldMatch, "ATPGPropogate2InputAND_InputBON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputBON_InputBShouldMatch, "ATPGPropogate2InputAND_InputBON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputAND_InputBON_OutputShouldMatch, "ATPGPropogate2InputAND_InputBON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputAOFF_InputAShouldMatch, "ATPGPropogate2InputOR_InputAOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputAOFF_InputBShouldMatch, "ATPGPropogate2InputOR_InputAOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputAOFF_OutputShouldMatch, "ATPGPropogate2InputOR_InputAOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputAON_InputAShouldMatch, "ATPGPropogate2InputOR_InputAON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputAON_InputBShouldMatch, "ATPGPropogate2InputOR_InputAON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputAON_OutputShouldMatch, "ATPGPropogate2InputOR_InputAON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputBOFF_InputAShouldMatch, "ATPGPropogate2InputOR_InputBOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputBOFF_InputBShouldMatch, "ATPGPropogate2InputOR_InputBOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputBOFF_OutputShouldMatch, "ATPGPropogate2InputOR_InputBOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputBON_InputAShouldMatch, "ATPGPropogate2InputOR_InputBON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputBON_InputBShouldMatch, "ATPGPropogate2InputOR_InputBON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputOR_InputBON_OutputShouldMatch, "ATPGPropogate2InputOR_InputBON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputAOFF_InputAShouldMatch, "ATPGPropogate2InputNAND_InputAOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputAOFF_InputBShouldMatch, "ATPGPropogate2InputNAND_InputAOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputAOFF_OutputShouldMatch, "ATPGPropogate2InputNAND_InputAOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputAON_InputAShouldMatch, "ATPGPropogate2InputNAND_InputAON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputAON_InputBShouldMatch, "ATPGPropogate2InputNAND_InputAON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputAON_OutputShouldMatch, "ATPGPropogate2InputNAND_InputAON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputBOFF_InputAShouldMatch, "ATPGPropogate2InputNAND_InputBOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputBOFF_InputBShouldMatch, "ATPGPropogate2InputNAND_InputBOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputBOFF_OutputShouldMatch, "ATPGPropogate2InputNAND_InputBOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputBON_InputAShouldMatch, "ATPGPropogate2InputNAND_InputBON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputBON_InputBShouldMatch, "ATPGPropogate2InputNAND_InputBON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNAND_InputBON_OutputShouldMatch, "ATPGPropogate2InputNAND_InputBON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputAOFF_InputAShouldMatch, "ATPGPropogate2InputNOR_InputAOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputAOFF_InputBShouldMatch, "ATPGPropogate2InputNOR_InputAOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputAOFF_OutputShouldMatch, "ATPGPropogate2InputNOR_InputAOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputAON_InputAShouldMatch, "ATPGPropogate2InputNOR_InputAON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputAON_InputBShouldMatch, "ATPGPropogate2InputNOR_InputAON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputAON_OutputShouldMatch, "ATPGPropogate2InputNOR_InputAON_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputBOFF_InputAShouldMatch, "ATPGPropogate2InputNOR_InputBOFF_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputBOFF_InputBShouldMatch, "ATPGPropogate2InputNOR_InputBOFF_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputBOFF_OutputShouldMatch, "ATPGPropogate2InputNOR_InputBOFF_OutputShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputBON_InputAShouldMatch, "ATPGPropogate2InputNOR_InputBON_InputAShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputBON_InputBShouldMatch, "ATPGPropogate2InputNOR_InputBON_InputBShouldMatch"),
    UnitTest(ATPGPropogate2InputNOR_InputBON_OutputShouldMatch, "ATPGPropogate2InputNOR_InputBON_OutputShouldMatch"),
    UnitTest(ATPGCase_TestCase1, "ATPGCase_TestCase1"),
    UnitTest(ATPGCase_TestCase2ASA0, "ATPGCase_TestCase2ASA0"),
    UnitTest(ATPGCase_TestCase2ASA1, "ATPGCase_TestCase2ASA1"),
    UnitTest(ATPGCase_TestCase2BSA0, "ATPGCase_TestCase2BSA0"),
    UnitTest(ATPGCase_TestCase2BSA1, "ATPGCase_TestCase2BSA1"),
    UnitTest(ATPGCase_TestCase2CSA0, "ATPGCase_TestCase2CSA0"),
    UnitTest(ATPGCase_TestCase2CSA1, "ATPGCase_TestCase2CSA1"),
    UnitTest(ATPGCase_TestCase2DSA0, "ATPGCase_TestCase2DSA0"),
    UnitTest(ATPGCase_TestCase2DSA1, "ATPGCase_TestCase2DSA1"),
    UnitTest(ATPGCase_TestCase2ESA0, "ATPGCase_TestCase2ESA0"),
    UnitTest(ATPGCase_TestCase2ESA1, "ATPGCase_TestCase2ESA1"),
    UnitTest(ATPGCase_TestCase2FSA0, "ATPGCase_TestCase2FSA0"),
    UnitTest(ATPGCase_TestCase2FSA1, "ATPGCase_TestCase2FSA1"),
    UnitTest(ATPGCase_TestCase2GSA0, "ATPGCase_TestCase2GSA0"),
    UnitTest(ATPGCase_TestCase2GSA1, "ATPGCase_TestCase2GSA1"),
    UnitTest(ATPGCase_TestCase2HSA0, "ATPGCase_TestCase2HSA0"),
    UnitTest(ATPGCase_TestCase2HSA1, "ATPGCase_TestCase2HSA1"),
    UnitTest(ATPGCase_TestCase2ISA0, "ATPGCase_TestCase2ISA0"),
    UnitTest(ATPGCase_TestCase2ISA1, "ATPGCase_TestCase2ISA1"),
    UnitTest(ATPGGenerateTestVectors_TestCase2_FullResultListShouldMatch, "ATPGGenerateTestVectors_TestCase2_FullResultListShouldMatch"),
    UnitTest(ATPGGenerateTestVectors_TestCase2_MinimizedResultListShouldMatch, "ATPGGenerateTestVectors_TestCase2_MinimizedResultListShouldMatch"),
    UnitTest(ATPGGenerateTestVectors_TestCase3_FullResultListShouldMatch, "ATPGGenerateTestVectors_TestCase3_FullResultListShouldMatch"),
    UnitTest(ATPGGenerateTestVectors_TestCase3_MinimizedResultListShouldMatch, "ATPGGenerateTestVectors_TestCase3_MinimizedResultListShouldMatch"),
    UnitTest(ATPGGenerateTestVectors_TestCase4_FullResultListShouldMatch, "ATPGGenerateTestVectors_TestCase4_FullResultListShouldMatch"),
    UnitTest(ATPGGenerateTestVectors_TestCase4_MinimizedResultListShouldMatch, "ATPGGenerateTestVectors_TestCase4_MinimizedResultListShouldMatch")
}));

void ATPGTransferNetList_ShouldSucceed() {
    int res = ERROR_NONE;
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertFalse(res);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_WireListShouldMatch() {
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<Wire*> wireList = GetWireList(netList);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(wireList), GetIDList(ATPGWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_GateListShouldMatch() {
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<Gate*> gateList = GetGateList(netList);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(gateList), GetIDList(ATPGGateList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_InputWireListShouldMatch() {
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(GetInputsList(netList)), GetIDList(ATPGInputWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_OutputWireListShouldMatch() {
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(GetOutputsList(netList)), GetIDList(ATPGOutputWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_ShouldBeErrorNetListEmpty() {
    int res = ERROR_NONE;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_NETLIST_EMPTY);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyGateInputConnections() { 
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<Gate*> gateList = GetGateList(netList);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(gateList.at(1)->GetInputs()), GetIDList(ATPGGateList.at(1)->GetInputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_VerifyGateOutputConnection() { 
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<Gate*> gateList = GetGateList(netList);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(gateList.at(1)->GetOutput()->GetID(), ATPGGateList.at(1)->GetOutput()->GetID());
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_VerifyWireInputConnections() { 
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<Wire*> wireList = GetWireList(netList);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(wireList.at(2)->GetInputs()), GetIDList(ATPGWireList.at(2)->GetInputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_VerifyWireInputNullConnections() { 
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Gate*>{}), GetIDList(ATPGInputWireList.at(0)->GetInputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_VerifyWireOutputConnections() { 
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<Wire*> wireList = GetWireList(netList);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(wireList.at(2)->GetOutputs()), GetIDList(ATPGWireList.at(2)->GetOutputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_VerifyWireOutputNullConnections() { 
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList();
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Wire*>{}), GetIDList(ATPGOutputWireList.at(0)->GetOutputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_ShouldFailXOR() {
    int res = -1;
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList(GATETYPE_XOR);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_TRANSFERNETLIST_GATETYPE_UNSUPPORTED);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_ShouldFailXNOR() {
    int res = -1;
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList(GATETYPE_XNOR);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_TRANSFERNETLIST_GATETYPE_UNSUPPORTED);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGTransferNetList_ShouldFailUNDEF() {
    int res = -1;
    std::vector<Node*> netList = GetATPGTransferTestCaseNetList(GATETYPE_UNDEF);
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_TRANSFERNETLIST_GATETYPE_UNSUPPORTED);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify_ShouldFailNullptr() {
    int res = ATPGJustify(nullptr, WIRESTATE_ON);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_JUSTIFY_WIRE_IS_NULL);
}

void ATPGJustify_WireHasNoInputs() {
    Wire w0;
    ATPGWire aw0(&w0);
    ATPGJustify(&aw0, WIRESTATE_ON);
    ATPG_UTL.AssertEqual(aw0.GetWireState(), WIRESTATE_ON);
}

void ATPGJustify_ShouldFailControlled() {
    int res = -1;
    Wire w0;
    ATPGWire aw0(&w0);
    ATPGJustify(&aw0, WIRESTATE_ON);
    res = ATPGJustify(&aw0, WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_STATE_ALREADY_SET);
}

void ATPGJustifyINV_OutputOFF_InputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustifyINV_OutputOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustifyINV_OutputON_InputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustifyINV_OutputON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputAND_OutputOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputAND_OutputOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputAND_OutputOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputAND_OutputON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputAND_OutputON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputAND_OutputON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputOR_OutputOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputOR_OutputOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputOR_OutputOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputOR_OutputON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputOR_OutputON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputOR_OutputON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNAND_OutputOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNAND_OutputOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNAND_OutputOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNAND_OutputON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNAND_OutputON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNAND_OutputON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNOR_OutputOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNOR_OutputOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNOR_OutputOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNOR_OutputON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNOR_OutputON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGJustify2InputNOR_OutputON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGJustify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate_ShouldFailNullptr() {
    int res = -1;
    res = ATPGPropogate(nullptr);
    ATPG_UTL.AssertEqual(res, ERROR_ATPG_PROPOGATE_WIRE_IS_NULL);
}

void ATPGPropogate_WireHasNoOutputs() {
    Wire w0;
    ATPGWire aw0(&w0);
    aw0.SetWireState(WIRESTATE_ON);
    ATPGPropogate(&aw0);
    ATPG_UTL.AssertEqual(aw0.GetWireState(), WIRESTATE_ON);
}

void ATPGPropogateINV_InputOFF_InputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogateINV_InputOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogateINV_InputON_InputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogateINV_InputON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputAOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputAOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);

}

void ATPGPropogate2InputAND_InputAOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputAON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputAON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputAON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputBOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputBOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputBOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputBON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputBON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputAND_InputBON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputAOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputAOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputAOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputAON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputAON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputAON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputBOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputBOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputBOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputBON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputBON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputOR_InputBON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputAOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputAOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputAOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputAON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputAON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputAON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputBOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputBOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputBOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputBON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputBON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNAND_InputBON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputAOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputAOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputAOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputAON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputAON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputAON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputBOFF_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputBOFF_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputBOFF_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_OFF);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputBON_InputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputBON_InputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetWireState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGPropogate2InputNOR_InputBON_OutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPG2InputNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetWireState(WIRESTATE_ON);
    ATPGPropogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetWireState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase1() { 
    std::string resultStr;
    std::vector<Node*> netList = GetTestCase1NetList();
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    // h
    ATPGCase(ATPGWireList.at(7), WIRESTATE_ON, ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={1X1X1},{j}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2ASA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(0), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2ASA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(0), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={01110},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2BSA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(1), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2BSA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(1), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={10110},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2CSA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(2), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2CSA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(2), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11010},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2DSA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(3), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2DSA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(3), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11100},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2ESA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(4), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11111},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2ESA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(4), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2FSA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(5), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2FSA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(5), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={0X110},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2GSA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(6), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2GSA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(6), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={110X0},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2HSA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(7), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2HSA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(7), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11111},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2ISA0() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(8), StuckAtFaultWireState.at(SAF0), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={0XXXX},{i}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase2ISA1() {
    std::string resultStr;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGTestCase2NetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGCase(ATPGWireList.at(8), StuckAtFaultWireState.at(SAF1), ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={11110},{i}={0}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGGenerateTestVectors_TestCase2_FullResultListShouldMatch() {
    std::vector<std::string> correctResultList = {
        "a SAF0:{abcde}={11110},{i}={0}",
        "a SAF1:{abcde}={01110},{i}={1}",
        "b SAF0:{abcde}={11110},{i}={0}",
        "b SAF1:{abcde}={10110},{i}={1}",
        "c SAF0:{abcde}={11110},{i}={0}",
        "c SAF1:{abcde}={11010},{i}={1}",
        "d SAF0:{abcde}={11110},{i}={0}",
        "d SAF1:{abcde}={11100},{i}={1}",
        "e SAF0:{abcde}={11111},{i}={1}",
        "e SAF1:{abcde}={11110},{i}={0}",
        "f SAF0:{abcde}={11110},{i}={0}",
        "f SAF1:{abcde}={0X110},{i}={1}",
        "g SAF0:{abcde}={11110},{i}={0}",
        "g SAF1:{abcde}={110X0},{i}={1}",
        "h SAF0:{abcde}={11110},{i}={0}",
        "h SAF1:{abcde}={11111},{i}={1}",
        "i SAF0:{abcde}={0XXXX},{i}={1}",
        "i SAF1:{abcde}={11110},{i}={0}"
    };
    std::vector<std::string> fullResultList, minimizedResultList;
    std::vector<Node*> netList = GetTestCase2NetList();
    ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    ATPG_UTL.AssertEqual(correctResultList, fullResultList);
    CleanupNetList(netList);
}

void ATPGGenerateTestVectors_TestCase2_MinimizedResultListShouldMatch() {
    std::vector<std::string> correctResultList = {
        "a SAF0, b SAF0, c SAF0, d SAF0, e SAF1, f SAF0, g SAF0, h SAF0, i SAF1:{abcde}={11110},{i}={0}",
        "a SAF1:{abcde}={01110},{i}={1}",
        "b SAF1:{abcde}={10110},{i}={1}",
        "c SAF1:{abcde}={11010},{i}={1}",
        "d SAF1:{abcde}={11100},{i}={1}",
        "e SAF0, h SAF1:{abcde}={11111},{i}={1}",
        "f SAF1:{abcde}={0X110},{i}={1}",
        "g SAF1:{abcde}={110X0},{i}={1}",
        "i SAF0:{abcde}={0XXXX},{i}={1}"
    };
    std::vector<std::string> fullResultList, minimizedResultList;
    std::vector<Node*> netList = GetTestCase2NetList();
    ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    ATPG_UTL.AssertEqual(correctResultList, minimizedResultList);
    CleanupNetList(netList);
}

void ATPGGenerateTestVectors_TestCase3_FullResultListShouldMatch() {
    std::vector<std::string> correctResultList = {
        "a SAF0:{abcdef}={110000},{k}={1}", 
        "a SAF1:{abcdef}={010000},{k}={0}", 
        "b SAF0:{abcdef}={110000},{k}={1}", 
        "b SAF1:{abcdef}={100000},{k}={0}", 
        "c SAF0:{abcdef}={111000},{k}={0}", 
        "c SAF1:{abcdef}={110000},{k}={1}", 
        "d SAF0:{abcdef}={110100},{k}={0}", 
        "d SAF1:{abcdef}={110000},{k}={1}", 
        "e SAF0:{abcdef}={110010},{k}={0}", 
        "e SAF1:{abcdef}={110000},{k}={1}", 
        "f SAF0:{abcdef}={110001},{k}={0}", 
        "f SAF1:{abcdef}={110000},{k}={1}", 
        "g SAF0:{abcdef}={0X0000},{k}={0}", 
        "g SAF1:{abcdef}={110000},{k}={1}", 
        "h SAF0:{abcdef}={111X00},{k}={0}", 
        "h SAF1:{abcdef}={110000},{k}={1}", 
        "i SAF0:{abcdef}={110000},{k}={1}", 
        "i SAF1:{abcdef}={11001X},{k}={0}", 
        "j SAF0:{abcdef}={110000},{k}={1}", 
        "j SAF1:{abcdef}={0XXX00},{k}={0}", 
        "k SAF0:{abcdef}={110000},{k}={1}",  
        "k SAF1:{abcdef}={0XXXXX},{k}={0}"
    };
    std::vector<std::string> fullResultList, minimizedResultList;
    std::vector<Node*> netList = GetTestCase3NetList();
    ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    ATPG_UTL.AssertEqual(correctResultList, fullResultList);
    CleanupNetList(netList);
}

void ATPGGenerateTestVectors_TestCase3_MinimizedResultListShouldMatch() {
    std::vector<std::string> correctResultList = {
        "a SAF0, b SAF0, c SAF1, d SAF1, e SAF1, f SAF1, g SAF1, h SAF1, i SAF0, j SAF0, k SAF0:{abcdef}={110000},{k}={1}", 
        "a SAF1:{abcdef}={010000},{k}={0}", 
        "b SAF1:{abcdef}={100000},{k}={0}", 
        "c SAF0:{abcdef}={111000},{k}={0}", 
        "d SAF0:{abcdef}={110100},{k}={0}", 
        "e SAF0:{abcdef}={110010},{k}={0}", 
        "f SAF0:{abcdef}={110001},{k}={0}", 
        "g SAF0:{abcdef}={0X0000},{k}={0}", 
        "h SAF0:{abcdef}={111X00},{k}={0}", 
        "i SAF1:{abcdef}={11001X},{k}={0}", 
        "j SAF1:{abcdef}={0XXX00},{k}={0}", 
        "k SAF1:{abcdef}={0XXXXX},{k}={0}"
    };
    std::vector<std::string> fullResultList, minimizedResultList;
    std::vector<Node*> netList = GetTestCase3NetList();
    ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    ATPG_UTL.AssertEqual(correctResultList, minimizedResultList);
    CleanupNetList(netList);
}

void ATPGGenerateTestVectors_TestCase4_FullResultListShouldMatch() {
    std::vector<std::string> correctResultList = {
        "a SAF0:{abcdef}={110000},{k}={0}",
        "a SAF1:{abcdef}={010000},{k}={1}", 
        "b SAF0:{abcdef}={110000},{k}={0}",
        "b SAF1:{abcdef}={100000},{k}={1}",
        "c SAF0:{abcdef}={0X1000},{k}={0}",
        "c SAF1:{abcdef}={0X0000},{k}={1}",
        "d SAF0:{abcdef}={0X0100},{k}={0}",
        "d SAF1:{abcdef}={0X0000},{k}={1}",
        "e SAF0:{abcdef}={11XX10},{k}={1}",
        "e SAF1:{abcdef}={11XX00},{k}={0}",
        "f SAF0:{abcdef}={11XX01},{k}={1}",
        "f SAF1:{abcdef}={11XX00},{k}={0}",
        "g SAF0:{abcdef}={110000},{k}={0}",
        "g SAF1:{abcdef}={0X0000},{k}={1}",
        "h SAF0:{abcdef}={0X1X00},{k}={0}",
        "h SAF1:{abcdef}={0X0000},{k}={1}",
        "i SAF0:{abcdef}={11XX00},{k}={0}",
        "i SAF1:{abcdef}={11XX1X},{k}={1}",
        "j SAF0:{abcdef}={11XX00},{k}={0}",
        "j SAF1:{abcdef}={0X0000},{k}={1}",
        "k SAF0:{abcdef}={0X00XX},{k}={1}",
        "k SAF1:{abcdef}={11XX00},{k}={0}"
    };
    std::vector<std::string> fullResultList, minimizedResultList;
    std::vector<Node*> netList = GetTestCase4NetList();
    ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    ATPG_UTL.AssertEqual(correctResultList, fullResultList);
    CleanupNetList(netList);
}

void ATPGGenerateTestVectors_TestCase4_MinimizedResultListShouldMatch() {
    std::vector<std::string> correctResultList = {
        "a SAF0, b SAF0, g SAF0:{abcdef}={110000},{k}={0}",
        "a SAF1:{abcdef}={010000},{k}={1}", 
        "b SAF1:{abcdef}={100000},{k}={1}",
        "c SAF0:{abcdef}={0X1000},{k}={0}",
        "c SAF1, d SAF1, g SAF1, h SAF1, j SAF1:{abcdef}={0X0000},{k}={1}",
        "d SAF0:{abcdef}={0X0100},{k}={0}",
        "e SAF0:{abcdef}={11XX10},{k}={1}",
        "e SAF1, f SAF1, i SAF0, j SAF0, k SAF1:{abcdef}={11XX00},{k}={0}",
        "f SAF0:{abcdef}={11XX01},{k}={1}",
        "h SAF0:{abcdef}={0X1X00},{k}={0}",
        "i SAF1:{abcdef}={11XX1X},{k}={1}",
        "k SAF0:{abcdef}={0X00XX},{k}={1}",
    };
    std::vector<std::string> fullResultList, minimizedResultList;
    std::vector<Node*> netList = GetTestCase4NetList();
    ATPGGenerateTestVectors(netList, fullResultList, minimizedResultList);
    ATPG_UTL.AssertEqual(correctResultList, minimizedResultList);
    CleanupNetList(netList);
}

std::vector<Node*> GetATPGTransferTestCaseNetList(GateType gateType) {
    Wire *w0 = new Wire();
    Wire *w1 = new Wire();
    Wire *w2 = new Wire();
    Wire *w3 = new Wire();
    Wire *w4 = new Wire();
    Wire *w5 = new Wire();
    Gate *g0 = new Gate(GATETYPE_AND, {w0, w1}, w2);
    Gate *g1 = new Gate(GATETYPE_INV, {w3}, w4);
    Gate *g2 = new Gate(gateType, {w2, w4}, w5);
    return {w0, w1, w2, w3, w4, w5, g0, g1, g2};
}

void GetATPGINVNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("Input"); 
    Wire *w1 = new Wire("Output");
    Gate *g0 = new Gate(GATETYPE_INV, {w0}, w1);
    netList = {w0, w1, g0};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

std::vector<Node*> Get2InputGate(GateType gateType) {
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(gateType, {w0, w1}, w2);
    return {w0, w1, w2, g0};
}

void GetATPG2InputANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    netList = Get2InputGate(GATETYPE_AND);
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPG2InputORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    netList = Get2InputGate(GATETYPE_OR);
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPG2InputNANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    netList = Get2InputGate(GATETYPE_NAND);
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPG2InputNORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    netList = Get2InputGate(GATETYPE_NOR);
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

std::vector<Node*> GetTestCase1NetList() { 
    Wire *a = new Wire("a");
    Wire *b = new Wire("b");
    Wire *c = new Wire("c");
    Wire *d = new Wire("d");
    Wire *e = new Wire("e");
    Wire *f = new Wire("f");
    Wire *g = new Wire("g");
    Wire *h = new Wire("h");
    Wire *i = new Wire("i");
    Wire *j = new Wire("j");
    Gate *g0 = new Gate(GATETYPE_OR, {a, b}, f);
    Gate *g1 = new Gate(GATETYPE_OR, {c, d}, g);
    Gate *g2 = new Gate(GATETYPE_INV, {e}, i);
    Gate *g3 = new Gate(GATETYPE_AND, {f, g}, h);
    Gate *g4 = new Gate(GATETYPE_OR, {h, i}, j);
    return {a, b, c, d, e, f, g, h, i, j, g0, g1, g2, g3, g4};
}
std::vector<Node*> GetTestCase2NetList() { 
    Wire *w0 = new Wire("a");
    Wire *w1 = new Wire("b");
    Wire *w2 = new Wire("c");
    Wire *w3 = new Wire("d");
    Wire *w4 = new Wire("e");
    Wire *w5 = new Wire("f");
    Wire *w6 = new Wire("g");
    Wire *w7 = new Wire("h");
    Wire *w8 = new Wire("i");
    Gate *g0 = new Gate(GATETYPE_AND, {w0, w1}, w5);
    Gate *g1 = new Gate(GATETYPE_AND, {w2, w3}, w6);
    Gate *g2 = new Gate(GATETYPE_INV, {w4}, w7);
    Gate *g3 = new Gate(GATETYPE_NAND, {w5, w6, w7}, w8);
    return {w0, w1, w2, w3, w4, w5, w6, w7, w8, g0, g1, g2, g3};
}

void GetATPGTestCase2NetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) {
    netList = GetTestCase2NetList();
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

std::vector<Node*> GetTestCase3NetList() {
    Wire *a = new Wire("a");
    Wire *b = new Wire("b");
    Wire *c = new Wire("c");
    Wire *d = new Wire("d");
    Wire *e = new Wire("e");
    Wire *f = new Wire("f");
    Wire *g = new Wire("g");
    Wire *h = new Wire("h");
    Wire *i = new Wire("i");
    Wire *j = new Wire("j");
    Wire *k = new Wire("k");
    Gate *g0 = new Gate(GATETYPE_NAND, {a, b}, g);
    Gate *g1 = new Gate(GATETYPE_OR, {c, d}, h);
    Gate *g2 = new Gate(GATETYPE_NOR, {e, f}, i);
    Gate *g3 = new Gate(GATETYPE_NOR, {g, h}, j);
    Gate *g4 = new Gate(GATETYPE_AND, {j, i}, k);
    return {a, b, c, d, e, f, g, h, i, j, k, g0, g1, g2, g3, g4};
}

std::vector<Node*> GetTestCase4NetList() {
    Wire *a = new Wire("a");
    Wire *b = new Wire("b");
    Wire *c = new Wire("c");
    Wire *d = new Wire("d");
    Wire *e = new Wire("e");
    Wire *f = new Wire("f");
    Wire *g = new Wire("g");
    Wire *h = new Wire("h");
    Wire *i = new Wire("i");
    Wire *j = new Wire("j");
    Wire *k = new Wire("k");
    Gate *g0 = new Gate(GATETYPE_AND, {a, b}, g);
    Gate *g1 = new Gate(GATETYPE_OR, {c, d}, h);
    Gate *g2 = new Gate(GATETYPE_NOR, {e, f}, i);
    Gate *g3 = new Gate(GATETYPE_OR, {g, h}, j);
    Gate *g4 = new Gate(GATETYPE_NAND, {j, i}, k);
    return {a, b, c, d, e, f, g, h, i, j, k, g0, g1, g2, g3, g4};
}
