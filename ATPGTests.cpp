#include "ATPGTests.h"

std::vector<void (*)()> ATPGTestFunctionVector = {
    None_CopyNetListToATPG_ShouldSucceed,
    None_CopyNetListToATPG_WireListShouldMatch,
    None_CopyNetListToATPG_InputWireListShouldMatch,
    None_CopyNetListToATPG_OutputWireListShouldMatch,
    None_CopyNetListToATPG_ShouldBeErrorNetListEmpty,
    None_CopyNetListToATPG_VerifyGateInputConnections,
    None_CopyNetListToATPG_VerifyGateOutputConnection,
    None_CopyNetListToATPG_VerifyWireInputConnections,
    None_CopyNetListToATPG_VerifyWireInputNullConnections,
    None_CopyNetListToATPG_VerifyWireOutputConnections,
    None_CopyNetListToATPG_VerifyWireOutputNullConnections,
    ATPG_ATPGCase_TestCase1
};

std::vector<std::string> ATPGTestNameVector = {
    "None_CopyNetListToATPG_ShouldSucceed",
    "None_CopyNetListToATPG_WireListShouldMatch",
    "None_CopyNetListToATPG_InputWireListShouldMatch",
    "None_CopyNetListToATPG_OutputWireListShouldMatch",
    "None_CopyNetListToATPG_ShouldBeErrorNetListEmpty",
    "None_CopyNetListToATPG_VerifyGateInputConnections",
    "None_CopyNetListToATPG_VerifyGateOutputConnection",
    "None_CopyNetListToATPG_VerifyWireInputConnections",
    "None_CopyNetListToATPG_VerifyWireInputNullConnections",
    "None_CopyNetListToATPG_VerifyWireOutputConnections",
    "None_CopyNetListToATPG_VerifyWireOutputNullConnections",
    "ATPG_ATPGCase_TestCase1"
};

UnitTestList ATPG_UTL("ATPG Unit Tests", ATPGTestFunctionVector, ATPGTestNameVector);

void None_CopyNetListToATPG_ShouldSucceed() {
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

void None_CopyNetListToATPG_WireListShouldMatch() {
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

void None_CopyNetListToATPG_GateListShouldMatch() {
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

void None_CopyNetListToATPG_InputWireListShouldMatch() {
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

void None_CopyNetListToATPG_OutputWireListShouldMatch() {
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

void None_CopyNetListToATPG_ShouldBeErrorNetListEmpty() {
    int res = ERROR_NONE;
    std::vector<Node*> netList;
    std::vector<ATPGGate*> ATPGGateList;
    std::vector<ATPGWire*> ATPGWireList;
    std::vector<ATPGWire*> ATPGInputWireList;
    std::vector<ATPGWire*> ATPGOutputWireList;
    res = CopyNetListToATPG(netList, ATPGGateList, ATPGWireList, ATPGInputWireList, ATPGOutputWireList);
    ATPG_UTL.AssertEqual(res, ERROR_NETLIST_EMPTY);
}

void None_CopyNetListToATPG_VerifyGateInputConnections() { 
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

void None_CopyNetListToATPG_VerifyGateOutputConnection() { 
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

void None_CopyNetListToATPG_VerifyWireInputConnections() { 
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

void None_CopyNetListToATPG_VerifyWireInputNullConnections() { 
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

void None_CopyNetListToATPG_VerifyWireOutputConnections() { 
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

void None_CopyNetListToATPG_VerifyWireOutputNullConnections() { 
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

void ATPG_ATPGCase_TestCase1() { 
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