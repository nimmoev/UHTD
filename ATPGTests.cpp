#include "ATPGTests.h"

std::vector<UnitTest> ATPG_UnitTests = {
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
    UnitTest(GetATPGGateFromMap_ShouldMatch, "GetATPGGateFromMap_ShouldMatch"),
    UnitTest(GetATPGGateFromMap_LastItemShouldMatch, "GetATPGGateFromMap_LastItemShouldMatch"),
    UnitTest(GetATPGGateFromMap_ShouldBeNullptr, "GetATPGGateFromMap_ShouldBeNullptr"),
    UnitTest(GetATPGWireFromMap_ShouldMatch, "GetATPGWireFromMap_ShouldMatch"),
    UnitTest(GetATPGWireFromMap_LastItemShouldMatch, "GetATPGWireFromMap_LastItemShouldMatch"),
    UnitTest(GetATPGWireFromMap_ShouldBeNullptr, "GetATPGWireFromMap_ShouldBeNullptr"),
    UnitTest(Justify_ShouldFailNullptr, "Justify_ShouldFailNullptr"),
    UnitTest(Justify_WireHasNoInputs, "Justify_WireHasNoInputs"),
    UnitTest(Justify_ShouldFailControlled, "Justify_ShouldFailControlled"),
    UnitTest(JustifyOFF_INVInputShouldMatch, "JustifyOFF_INVInputShouldMatch"),
    UnitTest(JustifyOFF_INVOutputShouldMatch, "JustifyOFF_INVOutputShouldMatch"),
    UnitTest(JustifyON_INVInputShouldMatch, "JustifyON_INVInputShouldMatch"),
    UnitTest(JustifyON_INVOutputShouldMatch, "JustifyON_INVOutputShouldMatch"),
    UnitTest(JustifyOFF_ANDInputAShouldMatch, "JustifyOFF_ANDInputAShouldMatch"),
    UnitTest(JustifyOFF_ANDInputBShouldMatch, "JustifyOFF_ANDInputBShouldMatch"),
    UnitTest(JustifyOFF_ANDOutputShouldMatch, "JustifyOFF_ANDOutputShouldMatch"),
    UnitTest(JustifyON_ANDInputAShouldMatch, "JustifyON_ANDInputAShouldMatch"),
    UnitTest(JustifyON_ANDInputBShouldMatch, "JustifyON_ANDInputBShouldMatch"),
    UnitTest(JustifyON_ANDOutputShouldMatch, "JustifyON_ANDOutputShouldMatch"),
    UnitTest(JustifyOFF_ORInputAShouldMatch, "JustifyOFF_ORInputAShouldMatch"),
    UnitTest(JustifyOFF_ORInputBShouldMatch, "JustifyOFF_ORInputBShouldMatch"),
    UnitTest(JustifyOFF_OROutputShouldMatch, "JustifyOFF_OROutputShouldMatch"),
    UnitTest(JustifyON_ORInputAShouldMatch, "JustifyON_ORInputAShouldMatch"),
    UnitTest(JustifyON_ORInputBShouldMatch, "JustifyON_ORInputBShouldMatch"),
    UnitTest(JustifyON_OROutputShouldMatch, "JustifyON_OROutputShouldMatch"),
    UnitTest(JustifyOFF_NANDInputAShouldMatch, "JustifyOFF_NANDInputAShouldMatch"),
    UnitTest(JustifyOFF_NANDInputBShouldMatch, "JustifyOFF_NANDInputBShouldMatch"),
    UnitTest(JustifyOFF_NANDOutputShouldMatch, "JustifyOFF_NANDOutputShouldMatch"),
    UnitTest(JustifyON_NANDInputAShouldMatch, "JustifyON_NANDInputAShouldMatch"),
    UnitTest(JustifyON_NANDInputBShouldMatch, "JustifyON_NANDInputBShouldMatch"),
    UnitTest(JustifyON_NANDOutputShouldMatch, "JustifyON_NANDOutputShouldMatch"),
    UnitTest(JustifyOFF_NORInputAShouldMatch, "JustifyOFF_NORInputAShouldMatch"),
    UnitTest(JustifyOFF_NORInputBShouldMatch, "JustifyOFF_NORInputBShouldMatch"),
    UnitTest(JustifyOFF_NOROutputShouldMatch, "JustifyOFF_NOROutputShouldMatch"),
    UnitTest(JustifyON_NORInputAShouldMatch, "JustifyON_NORInputAShouldMatch"),
    UnitTest(JustifyON_NORInputBShouldMatch, "JustifyON_NORInputBShouldMatch"),
    UnitTest(JustifyON_NOROutputShouldMatch, "JustifyON_NOROutputShouldMatch"),
    UnitTest(Propogate_ShouldFailNullptr, "Propogate_ShouldFailNullptr"),
    UnitTest(Propogate_WireHasNoOutputs, "Propogate_WireHasNoOutputs"),
    UnitTest(PropogateOFF_INVInputShouldMatch, "PropogateOFF_INVInputShouldMatch"),
    UnitTest(PropogateOFF_INVOutputShouldMatch, "PropogateOFF_INVOutputShouldMatch"),
    UnitTest(PropogateON_INVInputShouldMatch, "PropogateON_INVInputShouldMatch"),
    UnitTest(PropogateON_INVOutputShouldMatch, "PropogateON_INVOutputShouldMatch"),
    UnitTest(PropogateInputAOFF_ANDInputAShouldMatch, "PropogateInputAOFF_ANDInputAShouldMatch"),
    UnitTest(PropogateInputAOFF_ANDInputBShouldMatch, "PropogateInputAOFF_ANDInputBShouldMatch"),
    UnitTest(PropogateInputAOFF_ANDOutputShouldMatch, "PropogateInputAOFF_ANDOutputShouldMatch"),
    UnitTest(PropogateInputAON_ANDInputAShouldMatch, "PropogateInputAON_ANDInputAShouldMatch"),
    UnitTest(PropogateInputAON_ANDInputBShouldMatch, "PropogateInputAON_ANDInputBShouldMatch"),
    UnitTest(PropogateInputAON_ANDOutputShouldMatch, "PropogateInputAON_ANDOutputShouldMatch"),
    UnitTest(PropogateInputBOFF_ANDInputAShouldMatch, "PropogateInputBOFF_ANDInputAShouldMatch"),
    UnitTest(PropogateInputBOFF_ANDInputBShouldMatch, "PropogateInputBOFF_ANDInputBShouldMatch"),
    UnitTest(PropogateInputBOFF_ANDOutputShouldMatch, "PropogateInputBOFF_ANDOutputShouldMatch"),
    UnitTest(PropogateInputBON_ANDInputAShouldMatch, "PropogateInputBON_ANDInputAShouldMatch"),
    UnitTest(PropogateInputBON_ANDInputBShouldMatch, "PropogateInputBON_ANDInputBShouldMatch"),
    UnitTest(PropogateInputBON_ANDOutputShouldMatch, "PropogateInputBON_ANDOutputShouldMatch"),
    UnitTest(PropogateInputAOFF_ORInputAShouldMatch, "PropogateInputAOFF_ORInputAShouldMatch"),
    UnitTest(PropogateInputAOFF_ORInputBShouldMatch, "PropogateInputAOFF_ORInputBShouldMatch"),
    UnitTest(PropogateInputAOFF_OROutputShouldMatch, "PropogateInputAOFF_OROutputShouldMatch"),
    UnitTest(PropogateInputAON_ORInputAShouldMatch, "PropogateInputAON_ORInputAShouldMatch"),
    UnitTest(PropogateInputAON_ORInputBShouldMatch, "PropogateInputAON_ORInputBShouldMatch"),
    UnitTest(PropogateInputAON_OROutputShouldMatch, "PropogateInputAON_OROutputShouldMatch"),
    UnitTest(PropogateInputBOFF_ORInputAShouldMatch, "PropogateInputBOFF_ORInputAShouldMatch"),
    UnitTest(PropogateInputBOFF_ORInputBShouldMatch, "PropogateInputBOFF_ORInputBShouldMatch"),
    UnitTest(PropogateInputBOFF_OROutputShouldMatch, "PropogateInputBOFF_OROutputShouldMatch"),
    UnitTest(PropogateInputBON_ORInputAShouldMatch, "PropogateInputBON_ORInputAShouldMatch"),
    UnitTest(PropogateInputBON_ORInputBShouldMatch, "PropogateInputBON_ORInputBShouldMatch"),
    UnitTest(PropogateInputBON_OROutputShouldMatch, "PropogateInputBON_OROutputShouldMatch"),
    UnitTest(PropogateInputAOFF_NANDInputAShouldMatch, "PropogateInputAOFF_NANDInputAShouldMatch"),
    UnitTest(PropogateInputAOFF_NANDInputBShouldMatch, "PropogateInputAOFF_NANDInputBShouldMatch"),
    UnitTest(PropogateInputAOFF_NANDOutputShouldMatch, "PropogateInputAOFF_NANDOutputShouldMatch"),
    UnitTest(PropogateInputAON_NANDInputAShouldMatch, "PropogateInputAON_NANDInputAShouldMatch"),
    UnitTest(PropogateInputAON_NANDInputBShouldMatch, "PropogateInputAON_NANDInputBShouldMatch"),
    UnitTest(PropogateInputAON_NANDOutputShouldMatch, "PropogateInputAON_NANDOutputShouldMatch"),
    UnitTest(PropogateInputBOFF_NANDInputAShouldMatch, "PropogateInputBOFF_NANDInputAShouldMatch"),
    UnitTest(PropogateInputBOFF_NANDInputBShouldMatch, "PropogateInputBOFF_NANDInputBShouldMatch"),
    UnitTest(PropogateInputBOFF_NANDOutputShouldMatch, "PropogateInputBOFF_NANDOutputShouldMatch"),
    UnitTest(PropogateInputBON_NANDInputAShouldMatch, "PropogateInputBON_NANDInputAShouldMatch"),
    UnitTest(PropogateInputBON_NANDInputBShouldMatch, "PropogateInputBON_NANDInputBShouldMatch"),
    UnitTest(PropogateInputBON_NANDOutputShouldMatch, "PropogateInputBON_NANDOutputShouldMatch"),
    UnitTest(PropogateInputAOFF_NORInputAShouldMatch, "PropogateInputAOFF_NORInputAShouldMatch"),
    UnitTest(PropogateInputAOFF_NORInputBShouldMatch, "PropogateInputAOFF_NORInputBShouldMatch"),
    UnitTest(PropogateInputAOFF_NOROutputShouldMatch, "PropogateInputAOFF_NOROutputShouldMatch"),
    UnitTest(PropogateInputAON_NORInputAShouldMatch, "PropogateInputAON_NORInputAShouldMatch"),
    UnitTest(PropogateInputAON_NORInputBShouldMatch, "PropogateInputAON_NORInputBShouldMatch"),
    UnitTest(PropogateInputAON_NOROutputShouldMatch, "PropogateInputAON_NOROutputShouldMatch"),
    UnitTest(PropogateInputBOFF_NORInputAShouldMatch, "PropogateInputBOFF_NORInputAShouldMatch"),
    UnitTest(PropogateInputBOFF_NORInputBShouldMatch, "PropogateInputBOFF_NORInputBShouldMatch"),
    UnitTest(PropogateInputBOFF_NOROutputShouldMatch, "PropogateInputBOFF_NOROutputShouldMatch"),
    UnitTest(PropogateInputBON_NORInputAShouldMatch, "PropogateInputBON_NORInputAShouldMatch"),
    UnitTest(PropogateInputBON_NORInputBShouldMatch, "PropogateInputBON_NORInputBShouldMatch"),
    UnitTest(PropogateInputBON_NOROutputShouldMatch, "PropogateInputBON_NOROutputShouldMatch"),
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
    UnitTest(ATPGEntry_TestCase2_FullResultVectorShouldMatch, "ATPGEntry_TestCase2_FullResultVectorShouldMatch"),
    UnitTest(ATPGEntry_TestCase2_MinimizedResultVectorShouldMatch, "ATPGEntry_TestCase2_MinimizedResultVectorShouldMatch"),
    UnitTest(ATPGEntry_TestCase3_FullResultVectorShouldMatch, "ATPGEntry_TestCase3_FullResultVectorShouldMatch"),
    UnitTest(ATPGEntry_TestCase3_MinimizedResultVectorShouldMatch, "ATPGEntry_TestCase3_MinimizedResultVectorShouldMatch"),
    UnitTest(ATPGEntry_TestCase4_FullResultVectorShouldMatch, "ATPGEntry_TestCase4_FullResultVectorShouldMatch"),
    UnitTest(ATPGEntry_TestCase4_MinimizedResultVectorShouldMatch, "ATPGEntry_TestCase4_MinimizedResultVectorShouldMatch")
};

UnitTestList ATPG_UTL("ATPG Unit Tests", ATPG_UnitTests);

void ATPGTransferNetList_ShouldSucceed() {
    int res = ERROR_NONE;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertFalse(res);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_WireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w0.GetID(), w1.GetID(), w2.GetID(), w3.GetID(), w4.GetID(), w5.GetID()}, GetIDList(ATPGWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_GateListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({g0.GetID(), g1.GetID(), g2.GetID()}, GetIDList(ATPGWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_InputWireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w0.GetID(), w1.GetID(), w3.GetID()}, GetIDList(ATPGInputWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_OutputWireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w5.GetID()}, GetIDList(ATPGOutputWireList));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_ShouldBeErrorNetListEmpty() {
    int res = ERROR_NONE;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_NETLIST_EMPTY);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyGateInputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(g1.GetInputs()), GetIDList(ATPGGateList.at(1)->GetInputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyGateOutputConnection() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(g1.GetOutput()->GetID(), ATPGGateList.at(1)->GetOutput()->GetID());
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyWireInputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(w2.GetInputs()), GetIDList(ATPGWireList.at(2)->GetInputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyWireInputNullConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Gate*>{}), GetIDList(ATPGInputWireList.at(0)->GetInputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyWireOutputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(w2.GetOutputs()), GetIDList(ATPGWireList.at(2)->GetOutputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_VerifyWireOutputNullConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Wire*>{}), GetIDList(ATPGOutputWireList.at(0)->GetOutputs()));
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_ShouldFailXOR() {
    int res = -1;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(XOR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_GATETYPE_INVALID_TYPE);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_ShouldFailXNOR() {
    int res = -1;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(XNOR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_GATETYPE_INVALID_TYPE);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void ATPGTransferNetList_ShouldFailUNDEF() {
    int res = -1;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(UNDEF, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_GATETYPE_INVALID_TYPE);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
}

void GetATPGGateFromMap_ShouldMatch() {
    Gate g0, g1, g2, g3;
    ATPGGate ag0(&g0), ag1(&g1), ag2(&g2), ag3(&g3);
    std::map<int, ATPGGate*> gateMap;
    gateMap.insert(std::pair<const int, ATPGGate*>(g0.GetID(), &ag0));
    gateMap.insert(std::pair<const int, ATPGGate*>(g1.GetID(), &ag1));
    gateMap.insert(std::pair<const int, ATPGGate*>(g2.GetID(), &ag2));
    gateMap.insert(std::pair<const int, ATPGGate*>(g3.GetID(), &ag3));
    ATPG_UTL.AssertEqual(g2.GetID(), GetATPGGateFromMap(gateMap, g2.GetID())->GetID());
}

void GetATPGGateFromMap_LastItemShouldMatch() {
    Gate g0, g1, g2, g3;
    ATPGGate ag0(&g0), ag1(&g1), ag2(&g2), ag3(&g3);
    std::map<int, ATPGGate*> gateMap;
    gateMap.insert(std::pair<const int, ATPGGate*>(g0.GetID(), &ag0));
    gateMap.insert(std::pair<const int, ATPGGate*>(g1.GetID(), &ag1));
    gateMap.insert(std::pair<const int, ATPGGate*>(g2.GetID(), &ag2));
    gateMap.insert(std::pair<const int, ATPGGate*>(g3.GetID(), &ag3));
    ATPG_UTL.AssertEqual(g3.GetID(), GetATPGGateFromMap(gateMap, g3.GetID())->GetID());
}

void GetATPGGateFromMap_ShouldBeNullptr() {
    Gate g0, g1, g2, g3;
    ATPGGate ag0(&g0), ag1(&g1), ag2(&g2), ag3(&g3);
    std::map<int, ATPGGate*> gateMap;
    gateMap.insert(std::pair<const int, ATPGGate*>(g0.GetID(), &ag0));
    gateMap.insert(std::pair<const int, ATPGGate*>(g1.GetID(), &ag1));
    gateMap.insert(std::pair<const int, ATPGGate*>(g2.GetID(), &ag2));
    gateMap.insert(std::pair<const int, ATPGGate*>(g3.GetID(), &ag3));
    ATPG_UTL.AssertFalse(GetATPGGateFromMap(gateMap, g3.GetID() + 8));
}

void GetATPGWireFromMap_ShouldMatch() {
    Wire w0, w1, w2, w3;
    ATPGWire aw0(&w0), aw1(&w1), aw2(&w2), aw3(&w3);
    std::map<int, ATPGWire*> wireMap;
    wireMap.insert(std::pair<const int, ATPGWire*>(w0.GetID(), &aw0));
    wireMap.insert(std::pair<const int, ATPGWire*>(w1.GetID(), &aw1));
    wireMap.insert(std::pair<const int, ATPGWire*>(w2.GetID(), &aw2));
    wireMap.insert(std::pair<const int, ATPGWire*>(w3.GetID(), &aw3));
    ATPG_UTL.AssertEqual(w2.GetID(), GetATPGWireFromMap(wireMap, w2.GetID())->GetID());
}

void GetATPGWireFromMap_LastItemShouldMatch() { 
    Wire w0, w1, w2, w3;
    ATPGWire aw0(&w0), aw1(&w1), aw2(&w2), aw3(&w3);
    std::map<int, ATPGWire*> wireMap;
    wireMap.insert(std::pair<const int, ATPGWire*>(w0.GetID(), &aw0));
    wireMap.insert(std::pair<const int, ATPGWire*>(w1.GetID(), &aw1));
    wireMap.insert(std::pair<const int, ATPGWire*>(w2.GetID(), &aw2));
    wireMap.insert(std::pair<const int, ATPGWire*>(w3.GetID(), &aw3));
    ATPG_UTL.AssertEqual(w3.GetID(), GetATPGWireFromMap(wireMap, w3.GetID())->GetID());
}

void GetATPGWireFromMap_ShouldBeNullptr() {
    Wire w0, w1, w2, w3;
    ATPGWire aw0(&w0), aw1(&w1), aw2(&w2), aw3(&w3);
    std::map<int, ATPGWire*> wireMap;
    wireMap.insert(std::pair<const int, ATPGWire*>(w0.GetID(), &aw0));
    wireMap.insert(std::pair<const int, ATPGWire*>(w1.GetID(), &aw1));
    wireMap.insert(std::pair<const int, ATPGWire*>(w2.GetID(), &aw2));
    wireMap.insert(std::pair<const int, ATPGWire*>(w3.GetID(), &aw3));
    ATPG_UTL.AssertFalse(GetATPGWireFromMap(wireMap, w3.GetID() + 8));
}

void Justify_ShouldFailNullptr() {
    int res = Justify(nullptr, WIRESTATE_ON);
    ATPG_UTL.AssertEqual(res, ERROR_WIRE_IS_NULL);
}

void Justify_WireHasNoInputs() {
    Wire w0;
    ATPGWire aw0(&w0);
    Justify(&aw0, WIRESTATE_ON);
    ATPG_UTL.AssertEqual(aw0.GetState(), WIRESTATE_ON);
}

void Justify_ShouldFailControlled() {
    int res = -1;
    Wire w0;
    ATPGWire aw0(&w0);
    Justify(&aw0, WIRESTATE_ON);
    res = Justify(&aw0, WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(res, ERROR_STATE_ALREADY_SET);
}

void JustifyOFF_INVInputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_INVOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_INVInputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_INVOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_ANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Wire* wire = ATPGWireList.at(0)->GetWire();
    ATPGWire* aWire = ATPGWireList.at(0);
    Gate* gate = ATPGGateList.at(0)->GetGate();
    ATPGGate* aGate = ATPGGateList.at(0);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_ANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_ANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_ANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_ANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_ANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_ORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_ORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_OROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_ORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_ORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_OROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_NANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_NANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_NANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_NANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_NANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_NANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_NORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_NORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyOFF_NOROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_NORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_NORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void JustifyON_NOROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void Propogate_ShouldFailNullptr() {
    int res = -1;
    res = Propogate(nullptr);
    ATPG_UTL.AssertEqual(res, ERROR_WIRE_IS_NULL);
}

void Propogate_WireHasNoOutputs() {
    Wire w0;
    ATPGWire aw0(&w0);
    aw0.SetState(WIRESTATE_ON);
    Propogate(&aw0);
    ATPG_UTL.AssertEqual(aw0.GetState(), WIRESTATE_ON);
}

void PropogateOFF_INVInputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateOFF_INVOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateON_INVInputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateON_INVOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_ANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_ANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);

}

void PropogateInputAOFF_ANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_ANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_ANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_ANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_ANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_ANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_ANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_ANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_ANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_ANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_ORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_ORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_OROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_ORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_ORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_OROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_ORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_ORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_OROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_ORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_ORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_OROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_NANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_NANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_NANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_NANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_NANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_NANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_NANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_NANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_NANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_NANDInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_NANDInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_NANDOutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_NORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_NORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAOFF_NOROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_NORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_NORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputAON_NOROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_NORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_NORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBOFF_NOROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_NORInputAShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_NORInputBShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void PropogateInputBON_NOROutputShouldMatch() {
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList, &netList);
}

void ATPGCase_TestCase1() { 
    Wire a("a"), b("b"), c("c"), d("d"), e("e"), f("f"), g("g"), h("h"), i("i"), j("j");
    Gate g0(OR, {&a, &b}, &f);
    Gate g1(OR, {&c, &d}, &g);
    Gate g2(INV, {&e}, &i);
    Gate g3(AND, {&f, &g}, &h);
    Gate g4(OR, {&h, &i}, &j);
    std::string resultStr;
    std::vector<Node*> netList = {&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &g0, &g1, &g2, &g3, &g4};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    // h
    ATPGCase(ATPGWireList.at(7), WIRESTATE_ON, ATPGInputWireList, ATPGOutputWireList, resultStr);
    ATPG_UTL.AssertEqual("{abcde}={1X1X1},{j}={1}", resultStr);
    ATPGCleanupNetList(ATPGGateList, ATPGWireList);
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

void ATPGEntry_TestCase2_FullResultVectorShouldMatch() {
    std::vector<std::string> correctResultVector = {
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
    std::vector<std::string> fullResultVector, minimizedResultVector;
    std::vector<Node*> netList;
    GetTestCase2NetList(netList);
    ATPGEntry(netList, fullResultVector, minimizedResultVector);
    ATPG_UTL.AssertEqual(correctResultVector, fullResultVector);
    CleanupNetList(netList);
}

void ATPGEntry_TestCase2_MinimizedResultVectorShouldMatch() {
    std::vector<std::string> correctResultVector = {
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
    std::vector<std::string> fullResultVector, minimizedResultVector;
    std::vector<Node*> netList;
    GetTestCase2NetList(netList);
    ATPGEntry(netList, fullResultVector, minimizedResultVector);
    ATPG_UTL.AssertEqual(correctResultVector, minimizedResultVector);
    CleanupNetList(netList);
}

void ATPGEntry_TestCase3_FullResultVectorShouldMatch() {
    std::vector<std::string> correctResultVector = {
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
    std::vector<std::string> fullResultVector, minimizedResultVector;
    std::vector<Node*> netList;
    GetTestCase3NetList(netList);
    ATPGEntry(netList, fullResultVector, minimizedResultVector);
    ATPG_UTL.AssertEqual(correctResultVector, fullResultVector);
    CleanupNetList(netList);
}

void ATPGEntry_TestCase3_MinimizedResultVectorShouldMatch() {
    std::vector<std::string> correctResultVector = {
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
    std::vector<std::string> fullResultVector, minimizedResultVector;
    std::vector<Node*> netList;
    GetTestCase3NetList(netList);
    ATPGEntry(netList, fullResultVector, minimizedResultVector);
    ATPG_UTL.AssertEqual(correctResultVector, minimizedResultVector);
    CleanupNetList(netList);
}

void ATPGEntry_TestCase4_FullResultVectorShouldMatch() {
    std::vector<std::string> correctResultVector = {
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
    std::vector<std::string> fullResultVector, minimizedResultVector;
    std::vector<Node*> netList;
    GetTestCase4NetList(netList);
    ATPGEntry(netList, fullResultVector, minimizedResultVector);
    ATPG_UTL.AssertEqual(correctResultVector, fullResultVector);
    CleanupNetList(netList);
}

void ATPGEntry_TestCase4_MinimizedResultVectorShouldMatch() {
    std::vector<std::string> correctResultVector = {
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
    std::vector<std::string> fullResultVector, minimizedResultVector;
    std::vector<Node*> netList;
    GetTestCase4NetList(netList);
    ATPGEntry(netList, fullResultVector, minimizedResultVector);
    ATPG_UTL.AssertEqual(correctResultVector, minimizedResultVector);
    CleanupNetList(netList);
}

void GetATPGINVNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("Input"); 
    Wire *w1 = new Wire("Output");
    Gate *g0 = new Gate(INV, {w0}, w1);
    netList = {w0, w1, g0};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(AND, {w0, w1}, w2);
    netList = {w0, w1, w2, g0};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(OR, {w0, w1}, w2);
    netList = {w0, w1, w2, g0};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGNANDNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(NAND, {w0, w1}, w2);
    netList = {w0, w1, w2, g0};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGNORNetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(NOR, {w0, w1}, w2);
    netList = {w0, w1, w2, g0};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetTestCase2NetList(std::vector<Node*> &netList) { 
    Wire *w0 = new Wire("a");
    Wire *w1 = new Wire("b");
    Wire *w2 = new Wire("c");
    Wire *w3 = new Wire("d");
    Wire *w4 = new Wire("e");
    Wire *w5 = new Wire("f");
    Wire *w6 = new Wire("g");
    Wire *w7 = new Wire("h");
    Wire *w8 = new Wire("i");
    Gate *g0 = new Gate(AND, {w0, w1}, w5);
    Gate *g1 = new Gate(AND, {w2, w3}, w6);
    Gate *g2 = new Gate(INV, {w4}, w7);
    Gate *g3 = new Gate(NAND, {w5, w6, w7}, w8);
    netList = {w0, w1, w2, w3, w4, w5, w6, w7, w8, g0, g1, g2, g3};
}

void GetATPGTestCase2NetList(std::vector<Node*> &netList, std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) {
    Wire *w0 = new Wire("a");
    Wire *w1 = new Wire("b");
    Wire *w2 = new Wire("c");
    Wire *w3 = new Wire("d");
    Wire *w4 = new Wire("e");
    Wire *w5 = new Wire("f");
    Wire *w6 = new Wire("g");
    Wire *w7 = new Wire("h");
    Wire *w8 = new Wire("i");
    Gate *g0 = new Gate(AND, {w0, w1}, w5);
    Gate *g1 = new Gate(AND, {w2, w3}, w6);
    Gate *g2 = new Gate(INV, {w4}, w7);
    Gate *g3 = new Gate(NAND, {w5, w6, w7}, w8);
    netList = {w0, w1, w2, w3, w4, w5, w6, w7, w8, g0, g1, g2, g3};
    ATPGTransferNetList(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetTestCase3NetList(std::vector<Node*> &netList) {
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
    Gate *g0 = new Gate(NAND, {a, b}, g);
    Gate *g1 = new Gate(OR, {c, d}, h);
    Gate *g2 = new Gate(NOR, {e, f}, i);
    Gate *g3 = new Gate(NOR, {g, h}, j);
    Gate *g4 = new Gate(AND, {j, i}, k);
    netList = {a, b, c, d, e, f, g, h, i, j, k, g0, g1, g2, g3, g4};
}

void GetTestCase4NetList(std::vector<Node*> &netList) {
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
    Gate *g0 = new Gate(AND, {a, b}, g);
    Gate *g1 = new Gate(OR, {c, d}, h);
    Gate *g2 = new Gate(NOR, {e, f}, i);
    Gate *g3 = new Gate(OR, {g, h}, j);
    Gate *g4 = new Gate(NAND, {j, i}, k);
    netList = {a, b, c, d, e, f, g, h, i, j, k, g0, g1, g2, g3, g4};
}