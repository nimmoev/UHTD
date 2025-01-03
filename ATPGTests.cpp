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
    GetATPGGateFromMap_ShouldMatch,
    GetATPGGateFromMap_LastItemShouldMatch,
    GetATPGGateFromMap_ShouldBeNullptr,
    GetATPGWireFromMap_ShouldMatch,
    GetATPGWireFromMap_LastItemShouldMatch,
    GetATPGWireFromMap_ShouldBeNullptr,

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
    "GetATPGGateFromMap_ShouldMatch",
    "GetATPGGateFromMap_LastItemShouldMatch",
    "GetATPGGateFromMap_ShouldBeNullptr",
    "GetATPGWireFromMap_ShouldMatch",
    "GetATPGWireFromMap_LastItemShouldMatch",
    "GetATPGWireFromMap_ShouldBeNullptr",
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
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertFalse(res);
}

void CopyNetListToATPG_WireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w0.GetID(), w1.GetID(), w2.GetID(), w3.GetID(), w4.GetID(), w5.GetID()}, GetIDList(ATPGWireList));
}

void CopyNetListToATPG_GateListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({g0.GetID(), g1.GetID(), g2.GetID()}, GetIDList(ATPGWireList));
}

void CopyNetListToATPG_InputWireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w0.GetID(), w1.GetID(), w3.GetID()}, GetIDList(ATPGInputWireList));
}

void CopyNetListToATPG_OutputWireListShouldMatch() {
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual({w5.GetID()}, GetIDList(ATPGOutputWireList));
}

void CopyNetListToATPG_ShouldBeErrorNetListEmpty() {
    int res = ERROR_NONE;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_NETLIST_EMPTY);
}

void CopyNetListToATPG_VerifyGateInputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(g1.GetInputs()), GetIDList(ATPGGateList.at(1)->GetInputs()));
}

void CopyNetListToATPG_VerifyGateOutputConnection() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(g1.GetOutput()->GetID(), ATPGGateList.at(1)->GetOutput()->GetID());
}

void CopyNetListToATPG_VerifyWireInputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(w2.GetInputs()), GetIDList(ATPGWireList.at(2)->GetInputs()));
}

void CopyNetListToATPG_VerifyWireInputNullConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Gate*>{}), GetIDList(ATPGInputWireList.at(0)->GetInputs()));
}

void CopyNetListToATPG_VerifyWireOutputConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(w2.GetOutputs()), GetIDList(ATPGWireList.at(2)->GetOutputs()));
}

void CopyNetListToATPG_VerifyWireOutputNullConnections() { 
    Wire w0, w1, w2, w3, w4, w5;
    Gate g0(AND, {&w0, &w1}, &w2);
    Gate g1(INV, {&w3}, &w4);
    Gate g2(OR, {&w2, &w4}, &w5);
    std::vector<Node*> netList = {&w0, &w1, &w2, &w3, &w4, &w5, &g0, &g1, &g2};
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(GetIDList(std::vector<Wire*>{}), GetIDList(ATPGOutputWireList.at(0)->GetOutputs()));
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
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    // h
    ATPGCase(ATPGWireList.at(7), 1, resultStr);
    ATPG_UTL.AssertEqual("{a,b,c,d,e}={0,0,x,x,1},{j}={1}", resultStr);
    return;
}