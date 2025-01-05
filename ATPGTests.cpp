#include "ATPGTests.h"

std::vector<void (*)()> ATPGTestFunctionVector = {
    CopyNetListToATPG_ShouldSucceed,
    CopyNetListToATPG_WireListShouldMatch,
    CopyNetListToATPG_InputWireListShouldMatch,
    CopyNetListToATPG_OutputWireListShouldMatch,
    CopyNetListToATPG_ShouldBeErrorNetListEmpty,
    CopyNetListToATPG_VerifyGateInputConnections,
    CopyNetListToATPG_VerifyGateOutputConnection,
    CopyNetListToATPG_VerifyWireInputConnections,
    CopyNetListToATPG_VerifyWireInputNullConnections,
    CopyNetListToATPG_VerifyWireOutputConnections,
    CopyNetListToATPG_VerifyWireOutputNullConnections,
    CopyNetListToATPG_ShouldFailXOR,
    CopyNetListToATPG_ShouldFailXNOR,
    CopyNetListToATPG_ShouldFailUNDEF,
    GetATPGGateFromMap_ShouldMatch,
    GetATPGGateFromMap_LastItemShouldMatch,
    GetATPGGateFromMap_ShouldBeNullptr,
    GetATPGWireFromMap_ShouldMatch,
    GetATPGWireFromMap_LastItemShouldMatch,
    GetATPGWireFromMap_ShouldBeNullptr,
    Justify_ShouldFailNullptr,
    Justify_WireHasNoInputs,
    Justify_ShouldFailControlled,
    JustifyOFF_INVInputShouldMatch,
    JustifyOFF_INVOutputShouldMatch,
    JustifyON_INVInputShouldMatch,
    JustifyON_INVOutputShouldMatch,
    JustifyOFF_ANDInputAShouldMatch,
    JustifyOFF_ANDInputBShouldMatch,
    JustifyOFF_ANDOutputShouldMatch,
    JustifyON_ANDInputAShouldMatch,
    JustifyON_ANDInputBShouldMatch,
    JustifyON_ANDOutputShouldMatch,
    JustifyOFF_ORInputAShouldMatch,
    JustifyOFF_ORInputBShouldMatch,
    JustifyOFF_OROutputShouldMatch,
    JustifyON_ORInputAShouldMatch,
    JustifyON_ORInputBShouldMatch,
    JustifyON_OROutputShouldMatch,
    JustifyOFF_NANDInputAShouldMatch,
    JustifyOFF_NANDInputBShouldMatch,
    JustifyOFF_NANDOutputShouldMatch,
    JustifyON_NANDInputAShouldMatch,
    JustifyON_NANDInputBShouldMatch,
    JustifyON_NANDOutputShouldMatch,
    JustifyOFF_NORInputAShouldMatch,
    JustifyOFF_NORInputBShouldMatch,
    JustifyOFF_NOROutputShouldMatch,
    JustifyON_NORInputAShouldMatch,
    JustifyON_NORInputBShouldMatch,
    JustifyON_NOROutputShouldMatch,
    Propogate_ShouldFailNullptr,
    Propogate_WireHasNoOutputs,
    PropogateOFF_INVInputShouldMatch,
    PropogateOFF_INVOutputShouldMatch,
    PropogateON_INVInputShouldMatch,
    PropogateON_INVOutputShouldMatch,
    PropogateInputAOFF_ANDInputAShouldMatch,
    PropogateInputAOFF_ANDInputBShouldMatch,
    PropogateInputAOFF_ANDOutputShouldMatch,
    PropogateInputAON_ANDInputAShouldMatch,
    PropogateInputAON_ANDInputBShouldMatch,
    PropogateInputAON_ANDOutputShouldMatch,
    PropogateInputBOFF_ANDInputAShouldMatch,
    PropogateInputBOFF_ANDInputBShouldMatch,
    PropogateInputBOFF_ANDOutputShouldMatch,
    PropogateInputBON_ANDInputAShouldMatch,
    PropogateInputBON_ANDInputBShouldMatch,
    PropogateInputBON_ANDOutputShouldMatch,
    PropogateInputAOFF_ORInputAShouldMatch,
    PropogateInputAOFF_ORInputBShouldMatch,
    PropogateInputAOFF_OROutputShouldMatch,
    PropogateInputAON_ORInputAShouldMatch,
    PropogateInputAON_ORInputBShouldMatch,
    PropogateInputAON_OROutputShouldMatch,
    PropogateInputBOFF_ORInputAShouldMatch,
    PropogateInputBOFF_ORInputBShouldMatch,
    PropogateInputBOFF_OROutputShouldMatch,
    PropogateInputBON_ORInputAShouldMatch,
    PropogateInputBON_ORInputBShouldMatch,
    PropogateInputBON_OROutputShouldMatch,
    PropogateInputAOFF_NANDInputAShouldMatch,
    PropogateInputAOFF_NANDInputBShouldMatch,
    PropogateInputAOFF_NANDOutputShouldMatch,
    PropogateInputAON_NANDInputAShouldMatch,
    PropogateInputAON_NANDInputBShouldMatch,
    PropogateInputAON_NANDOutputShouldMatch,
    PropogateInputBOFF_NANDInputAShouldMatch,
    PropogateInputBOFF_NANDInputBShouldMatch,
    PropogateInputBOFF_NANDOutputShouldMatch,
    PropogateInputBON_NANDInputAShouldMatch,
    PropogateInputBON_NANDInputBShouldMatch,
    PropogateInputBON_NANDOutputShouldMatch,
    PropogateInputAOFF_NORInputAShouldMatch,
    PropogateInputAOFF_NORInputBShouldMatch,
    PropogateInputAOFF_NOROutputShouldMatch,
    PropogateInputAON_NORInputAShouldMatch,
    PropogateInputAON_NORInputBShouldMatch,
    PropogateInputAON_NOROutputShouldMatch,
    PropogateInputBOFF_NORInputAShouldMatch,
    PropogateInputBOFF_NORInputBShouldMatch,
    PropogateInputBOFF_NOROutputShouldMatch,
    PropogateInputBON_NORInputAShouldMatch,
    PropogateInputBON_NORInputBShouldMatch,
    PropogateInputBON_NOROutputShouldMatch,

    ATPGCase_TestCase1
};

std::vector<std::string> ATPGTestNameVector = {
    "CopyNetListToATPG_ShouldSucceed",
    "CopyNetListToATPG_WireListShouldMatch",
    "CopyNetListToATPG_InputWireListShouldMatch",
    "CopyNetListToATPG_OutputWireListShouldMatch",
    "CopyNetListToATPG_ShouldBeErrorNetListEmpty",
    "CopyNetListToATPG_VerifyGateInputConnections",
    "CopyNetListToATPG_VerifyGateOutputConnection",
    "CopyNetListToATPG_VerifyWireInputConnections",
    "CopyNetListToATPG_VerifyWireInputNullConnections",
    "CopyNetListToATPG_VerifyWireOutputConnections",
    "CopyNetListToATPG_VerifyWireOutputNullConnections",
    "CopyNetListToATPG_ShouldFailXOR",
    "CopyNetListToATPG_ShouldFailXNOR",
    "CopyNetListToATPG_ShouldFailUNDEF",
    "GetATPGGateFromMap_ShouldMatch",
    "GetATPGGateFromMap_LastItemShouldMatch",
    "GetATPGGateFromMap_ShouldBeNullptr",
    "GetATPGWireFromMap_ShouldMatch",
    "GetATPGWireFromMap_LastItemShouldMatch",
    "GetATPGWireFromMap_ShouldBeNullptr",
    "Justify_ShouldFailNullptr",
    "Justify_WireHasNoInputs",
    "Justify_ShouldFailControlled",
    "JustifyOFF_INVInputShouldMatch",
    "JustifyOFF_INVOutputShouldMatch",
    "JustifyON_INVInputShouldMatch",
    "JustifyON_INVOutputShouldMatch",
    "JustifyOFF_ANDInputAShouldMatch",
    "JustifyOFF_ANDInputBShouldMatch",
    "JustifyOFF_ANDOutputShouldMatch",
    "JustifyON_ANDInputAShouldMatch",
    "JustifyON_ANDInputBShouldMatch",
    "JustifyON_ANDOutputShouldMatch",
    "JustifyOFF_ORInputAShouldMatch",
    "JustifyOFF_ORInputBShouldMatch",
    "JustifyOFF_OROutputShouldMatch",
    "JustifyON_ORInputAShouldMatch",
    "JustifyON_ORInputBShouldMatch",
    "JustifyON_OROutputShouldMatch",
    "JustifyOFF_NANDInputAShouldMatch",
    "JustifyOFF_NANDInputBShouldMatch",
    "JustifyOFF_NANDOutputShouldMatch",
    "JustifyON_NANDInputAShouldMatch",
    "JustifyON_NANDInputBShouldMatch",
    "JustifyON_NANDOutputShouldMatch",
    "JustifyOFF_NORInputAShouldMatch",
    "JustifyOFF_NORInputBShouldMatch",
    "JustifyOFF_NOROutputShouldMatch",
    "JustifyON_NORInputAShouldMatch",
    "JustifyON_NORInputBShouldMatch",
    "JustifyON_NOROutputShouldMatch",
    "Propogate_ShouldFailNullptr",
    "Propogate_WireHasNoOutputs",
    "PropogateOFF_INVInputShouldMatch",
    "PropogateOFF_INVOutputShouldMatch",
    "PropogateON_INVInputShouldMatch",
    "PropogateON_INVOutputShouldMatch",
    "PropogateInputAOFF_ANDInputAShouldMatch",
    "PropogateInputAOFF_ANDInputBShouldMatch",
    "PropogateInputAOFF_ANDOutputShouldMatch",
    "PropogateInputAON_ANDInputAShouldMatch",
    "PropogateInputAON_ANDInputBShouldMatch",
    "PropogateInputAON_ANDOutputShouldMatch",
    "PropogateInputBOFF_ANDInputAShouldMatch",
    "PropogateInputBOFF_ANDInputBShouldMatch",
    "PropogateInputBOFF_ANDOutputShouldMatch",
    "PropogateInputBON_ANDInputAShouldMatch",
    "PropogateInputBON_ANDInputBShouldMatch",
    "PropogateInputBON_ANDOutputShouldMatch",
    "PropogateInputAOFF_ORInputAShouldMatch",
    "PropogateInputAOFF_ORInputBShouldMatch",
    "PropogateInputAOFF_OROutputShouldMatch",
    "PropogateInputAON_ORInputAShouldMatch",
    "PropogateInputAON_ORInputBShouldMatch",
    "PropogateInputAON_OROutputShouldMatch",
    "PropogateInputBOFF_ORInputAShouldMatch",
    "PropogateInputBOFF_ORInputBShouldMatch",
    "PropogateInputBOFF_OROutputShouldMatch",
    "PropogateInputBON_ORInputAShouldMatch",
    "PropogateInputBON_ORInputBShouldMatch",
    "PropogateInputBON_OROutputShouldMatch",
    "PropogateInputAOFF_NANDInputAShouldMatch",
    "PropogateInputAOFF_NANDInputBShouldMatch",
    "PropogateInputAOFF_NANDOutputShouldMatch",
    "PropogateInputAON_NANDInputAShouldMatch",
    "PropogateInputAON_NANDInputBShouldMatch",
    "PropogateInputAON_NANDOutputShouldMatch",
    "PropogateInputBOFF_NANDInputAShouldMatch",
    "PropogateInputBOFF_NANDInputBShouldMatch",
    "PropogateInputBOFF_NANDOutputShouldMatch",
    "PropogateInputBON_NANDInputAShouldMatch",
    "PropogateInputBON_NANDInputBShouldMatch",
    "PropogateInputBON_NANDOutputShouldMatch",
    "PropogateInputAOFF_NORInputAShouldMatch",
    "PropogateInputAOFF_NORInputBShouldMatch",
    "PropogateInputAOFF_NOROutputShouldMatch",
    "PropogateInputAON_NORInputAShouldMatch",
    "PropogateInputAON_NORInputBShouldMatch",
    "PropogateInputAON_NOROutputShouldMatch",
    "PropogateInputBOFF_NORInputAShouldMatch",
    "PropogateInputBOFF_NORInputBShouldMatch",
    "PropogateInputBOFF_NOROutputShouldMatch",
    "PropogateInputBON_NORInputAShouldMatch",
    "PropogateInputBON_NORInputBShouldMatch",
    "PropogateInputBON_NOROutputShouldMatch",

    "ATPGCase_TestCase1"
};

UnitTestList ATPG_UTL("ATPG Unit Tests", ATPGTestFunctionVector, ATPGTestNameVector);

void CopyNetListToATPG_ShouldSucceed() {
    int res = ERROR_NONE;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertFalse(res);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_WireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w0.GetID(), w1.GetID(), w2.GetID(), w3.GetID(), w4.GetID(), w5.GetID()}, GetIDList(ATPGWireList));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_GateListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({g0.GetID(), g1.GetID(), g2.GetID()}, GetIDList(ATPGWireList));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_InputWireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w0.GetID(), w1.GetID(), w3.GetID()}, GetIDList(ATPGInputWireList));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_OutputWireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w5.GetID()}, GetIDList(ATPGOutputWireList));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_ShouldBeErrorNetListEmpty() {
    int res = ERROR_NONE;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_NETLIST_EMPTY);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_VerifyGateInputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(g1.GetInputs()), GetIDList(ATPGGateList.at(1)->GetInputs()));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_VerifyGateOutputConnection() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(g1.GetOutput()->GetID(), ATPGGateList.at(1)->GetOutput()->GetID());
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_VerifyWireInputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(w2.GetInputs()), GetIDList(ATPGWireList.at(2)->GetInputs()));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_VerifyWireInputNullConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Gate*>{}), GetIDList(ATPGInputWireList.at(0)->GetInputs()));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_VerifyWireOutputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(w2.GetOutputs()), GetIDList(ATPGWireList.at(2)->GetOutputs()));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_VerifyWireOutputNullConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Wire*>{}), GetIDList(ATPGOutputWireList.at(0)->GetOutputs()));
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_ShouldFailXOR() {
    int res = -1;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(XOR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_GATETYPE_INVALID_TYPE);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_ShouldFailXNOR() {
    int res = -1;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(XNOR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_GATETYPE_INVALID_TYPE);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void CopyNetListToATPG_ShouldFailUNDEF() {
    int res = -1;
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(UNDEF, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_GATETYPE_INVALID_TYPE);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
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
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_INVOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_INVInputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_INVOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_OROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_OROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NOROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NOROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), WIRESTATE_ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
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
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateOFF_INVOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateON_INVInputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateON_INVOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGINVNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_ANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_ANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);

}

void PropogateInputAOFF_ANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_ANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_ANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_ANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_ANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_ANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_ANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_ANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_ANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_ANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_ORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_ORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_OROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_ORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_ORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_OROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_ORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_ORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_OROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_ORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_ORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_OROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_NANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_NANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_NANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_NANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_NANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_NANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_NANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_NANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_NANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_NANDInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_NANDInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_NANDOutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNANDNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_NORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_NORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAOFF_NOROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_NORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_NORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputAON_NOROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(0)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(0));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_NORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_NORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBOFF_NOROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_OFF);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_NORInputAShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), WIRESTATE_DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_NORInputBShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), WIRESTATE_ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void PropogateInputBON_NOROutputShouldMatch() {
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    GetATPGNORNetList(ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPGInputWireList.at(1)->SetState(WIRESTATE_ON);
    Propogate(ATPGInputWireList.at(1));
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), WIRESTATE_OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void ATPGCase_TestCase1() { 
    Wire a, b, c, d, e, f, g, h, i, j;
    Gate g0(OR, {&a, &b}, &f);
    Gate g1(OR, {&c, &d}, &g);
    Gate g2(INV, {&e}, &i);
    Gate g3(AND, {&f, &g}, &h);
    Gate g4(OR, {&h, &i}, &j);
    std::string resultStr;
    std::vector<Node*> netList = {&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &g0, &g1, &g2, &g3, &g4};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    // h
    ATPGCase(ATPGWireList.at(7), WIRESTATE_ON, resultStr);
    ATPG_UTL.AssertEqual("{a,b,c,d,e}={0,0,x,x,1},{j}={1}", resultStr);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void GetATPGINVNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("Input"); 
    Wire *w1 = new Wire("Output");
    Gate *g0 = new Gate(INV, {w0}, w1);
    std::vector<Node*> netList = {w0, w1, g0};
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGANDNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(AND, {w0, w1}, w2);
    std::vector<Node*> netList = {w0, w1, w2, g0};
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGORNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(OR, {w0, w1}, w2);
    std::vector<Node*> netList = {w0, w1, w2, g0};
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGNANDNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(NAND, {w0, w1}, w2);
    std::vector<Node*> netList = {w0, w1, w2, g0};
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}

void GetATPGNORNetList(std::vector<ATPGGate*> &ATPGGateList, std::vector<ATPGWire*> &ATPGWireList, std::vector<ATPGWire*> &ATPGInputWireList, std::vector<ATPGWire*> &ATPGOutputWireList) { 
    Wire *w0 = new Wire("InputA"); 
    Wire *w1 = new Wire("InputB");
    Wire *w2 = new Wire("Output");
    Gate *g0 = new Gate(NOR, {w0, w1}, w2);
    std::vector<Node*> netList = {w0, w1, w2, g0};
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
}