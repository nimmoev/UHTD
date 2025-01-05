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
    int res = Justify(nullptr, ON);
    ATPG_UTL.AssertEqual(res, ERROR_WIRE_IS_NULL);
}

void Justify_WireHasNoInputs() {
    Wire w0;
    ATPGWire aw0(&w0);
    Justify(&aw0, ON);
    ATPG_UTL.AssertEqual(aw0.GetState(), ON);
}

void Justify_ShouldFailControlled() {
    int res = -1;
    Wire w0;
    ATPGWire aw0(&w0);
    Justify(&aw0, ON);
    res = Justify(&aw0, OFF);
    ATPG_UTL.AssertEqual(res, ERROR_STATE_ALREADY_SET);
}

void JustifyOFF_INVInputShouldMatch() {
    Wire w0, w1;
    Gate g0(INV, {&w0}, &w1);
    std::vector<Node*> netList = {&w0, &w1, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_INVOutputShouldMatch() {
    Wire w0, w1;
    Gate g0(INV, {&w0}, &w1);
    std::vector<Node*> netList = {&w0, &w1, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_INVInputShouldMatch() {
    Wire w0, w1;
    Gate g0(INV, {&w0}, &w1);
    std::vector<Node*> netList = {&w0, &w1, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_INVOutputShouldMatch() {
    Wire w0, w1;
    Gate g0(INV, {&w0}, &w1);
    std::vector<Node*> netList = {&w0, &w1, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ANDInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(AND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ANDInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(AND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ANDOutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(AND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ANDInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(AND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ANDInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(AND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ANDOutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(AND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ORInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(OR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_ORInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(OR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_OROutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(OR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ORInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(OR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_ORInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(OR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_OROutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(OR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NANDInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NAND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NANDInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NAND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NANDOutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NAND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NANDInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NAND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NANDInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NAND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NANDOutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NAND, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NORInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NOR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), ON);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NORInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NOR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), DC);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyOFF_NOROutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NOR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), OFF);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NORInputAShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NOR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(0)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NORInputBShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NOR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGInputWireList.at(1)->GetState(), OFF);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}

void JustifyON_NOROutputShouldMatch() {
    Wire w0, w1, w2;
    Gate g0(NOR, {&w0, &w1}, &w2);
    std::vector<Node*> netList = {&w0, &w1, &w2, &g0};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList, ATPGInputWireList, ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    Justify(ATPGOutputWireList.at(0), ON);
    ATPG_UTL.AssertEqual(ATPGOutputWireList.at(0)->GetState(), ON);
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
    ATPGCase(ATPGWireList.at(7), ON, resultStr);
    ATPG_UTL.AssertEqual("{a,b,c,d,e}={0,0,x,x,1},{j}={1}", resultStr);
    CleanupATPGNetList(ATPGGateList, ATPGWireList);
}