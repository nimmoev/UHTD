#include "ATPGTests.h"

std::vector<void (*)()> ATPGTestFunctionVector = {
    ATPG_JustifyNULL_ShouldFail,
    ATPG_JustifyUnconnectedInputsOutputs_ShouldFail,
    ATPG_JustifyUnconnectedInputs_ShouldFail,
    ATPG_JustifyUnconnectedOutputs_ShouldFail,
    ATPG_JustifyUNDEF_ShouldFail,
    ATPG_JustifyINV_ShouldSucceed,
    ATPG_JustifyINV_MoreThanOneInputShouldFail,
    ATPG_JustifyINV_InputAShouldBe0,
    ATPG_JustifyINV_InputAShouldBe1,
    ATPG_JustifyAND_ShouldSucceed,
    ATPG_JustifyAND_InputAShouldBe0,
    ATPG_JustifyAND_InputAShouldBe1,
    ATPG_JustifyAND_InputBShouldBe0,
    ATPG_JustifyAND_InputBShouldBe1,
    ATPG_JustifyOR_ShouldSucceed,
    ATPG_JustifyOR_InputAShouldBe0,
    ATPG_JustifyOR_InputAShouldBe1,
    ATPG_JustifyOR_InputBShouldBe0,
    ATPG_JustifyOR_InputBShouldBe1,
    ATPG_JustifyNAND_ShouldSucceed,
    ATPG_JustifyNAND_InputAShouldBe0,
    ATPG_JustifyNAND_InputAShouldBe1,
    ATPG_JustifyNAND_InputBShouldBe0,
    ATPG_JustifyNAND_InputBShouldBe1,
    ATPG_JustifyNOR_ShouldSucceed,
    ATPG_JustifyNOR_InputAShouldBe0,
    ATPG_JustifyNOR_InputAShouldBe1,
    ATPG_JustifyNOR_InputBShouldBe0,
    ATPG_JustifyNOR_InputBShouldBe1,
    ATPG_JustifyXOR_ShouldSucceed,
    ATPG_JustifyXOR_InputAShouldBe0,
    ATPG_JustifyXOR_InputAShouldBe1,
    ATPG_JustifyXOR_InputBShouldBe0,
    ATPG_JustifyXOR_InputBShouldBe1,
    ATPG_JustifyXNOR_ShouldSucceed,
    ATPG_JustifyXNOR_InputAShouldBe0,
    ATPG_JustifyXNOR_InputAShouldBe1,
    ATPG_JustifyXNOR_InputBShouldBe0,
    ATPG_JustifyXNOR_InputBShouldBe1,
    TopSort_TestCase1_ShouldSucceed,
    TopSort_TestCase2_ShouldSucceed
};

std::vector<std::string> ATPGTestNameVector = {
    "ATPG_JustifyNULL_ShouldFail",
    "ATPG_JustifyUnconnectedInputsOutputs_ShouldFail",
    "ATPG_JustifyUnconnectedInputs_ShouldFail",
    "ATPG_JustifyUnconnectedOutputs_ShouldFail",
    "ATPG_JustifyUNDEF_ShouldFail",
    "ATPG_JustifyINV_ShouldSucceed",
    "ATPG_JustifyINV_MoreThanOneInputShouldFail",
    "ATPG_JustifyINV_InputAShouldBe0",
    "ATPG_JustifyINV_InputAShouldBe1",
    "ATPG_JustifyAND_ShouldSucceed",
    "ATPG_JustifyAND_InputAShouldBe0",
    "ATPG_JustifyAND_InputAShouldBe1",
    "ATPG_JustifyAND_InputBShouldBe0",
    "ATPG_JustifyAND_InputBShouldBe1",
    "ATPG_JustifyOR_ShouldSucceed",
    "ATPG_JustifyOR_InputAShouldBe0",
    "ATPG_JustifyOR_InputAShouldBe1",
    "ATPG_JustifyOR_InputBShouldBe0",
    "ATPG_JustifyOR_InputBShouldBe1",
    "ATPG_JustifyNAND_ShouldSucceed",
    "ATPG_JustifyNAND_InputAShouldBe0",
    "ATPG_JustifyNAND_InputAShouldBe1",
    "ATPG_JustifyNAND_InputBShouldBe0",
    "ATPG_JustifyNAND_InputBShouldBe1",
    "ATPG_JustifyNOR_ShouldSucceed",
    "ATPG_JustifyNOR_InputAShouldBe0",
    "ATPG_JustifyNOR_InputAShouldBe1",
    "ATPG_JustifyNOR_InputBShouldBe0",
    "ATPG_JustifyNOR_InputBShouldBe1",
    "ATPG_JustifyXOR_ShouldSucceed",
    "ATPG_JustifyXOR_InputAShouldBe0",
    "ATPG_JustifyXOR_InputAShouldBe1",
    "ATPG_JustifyXOR_InputBShouldBe0",
    "ATPG_JustifyXOR_InputBShouldBe1",
    "ATPG_JustifyXNOR_ShouldSucceed",
    "ATPG_JustifyXNOR_InputAShouldBe0",
    "ATPG_JustifyXNOR_InputAShouldBe1",
    "ATPG_JustifyXNOR_InputBShouldBe0",
    "ATPG_JustifyXNOR_InputBShouldBe1",
    "TopSort_TestCase1_ShouldSucceed",
    "TopSort_TestCase2_ShouldSucceed"
};

UnitTestList ATPG_UTL("ATPG Unit Tests", ATPGTestFunctionVector, ATPGTestNameVector);

void ATPG_JustifyNULL_ShouldFail() {
    return;
}

void ATPG_JustifyUnconnectedInputsOutputs_ShouldFail() {
    return;
}

void ATPG_JustifyUnconnectedInputs_ShouldFail() {
    return;
}

void ATPG_JustifyUnconnectedOutputs_ShouldFail() {
    return;
}

void ATPG_JustifyUNDEF_ShouldFail() {
    return;
}

void ATPG_JustifyINV_ShouldSucceed() {
    return;
}

void ATPG_JustifyINV_MoreThanOneInputShouldFail() { 
    return;
}

void ATPG_JustifyINV_InputAShouldBe0() {
    return;
}

void ATPG_JustifyINV_InputAShouldBe1() {
    return;
}

void ATPG_JustifyAND_ShouldSucceed() {
    return;
}

void ATPG_JustifyAND_InputAShouldBe0() {
    return;
}

void ATPG_JustifyAND_InputAShouldBe1() {
    return;
}

void ATPG_JustifyAND_InputBShouldBe0() {
    return;
}

void ATPG_JustifyAND_InputBShouldBe1() {
    return;
}

void ATPG_JustifyOR_ShouldSucceed() {
    return;
}

void ATPG_JustifyOR_InputAShouldBe0() {
    return;
}

void ATPG_JustifyOR_InputAShouldBe1() {
    return;
}

void ATPG_JustifyOR_InputBShouldBe0() {
    return;
}

void ATPG_JustifyOR_InputBShouldBe1() {
    return;
}

void ATPG_JustifyNAND_ShouldSucceed() {
    return;
}

void ATPG_JustifyNAND_InputAShouldBe0() {
    return;
}

void ATPG_JustifyNAND_InputAShouldBe1() {
    return;
}

void ATPG_JustifyNAND_InputBShouldBe0() {
    return;
}

void ATPG_JustifyNAND_InputBShouldBe1() {
    return;
}

void ATPG_JustifyNOR_ShouldSucceed() {
    return;
}

void ATPG_JustifyNOR_InputAShouldBe0() {
    return;
}

void ATPG_JustifyNOR_InputAShouldBe1() {
    return;
}

void ATPG_JustifyNOR_InputBShouldBe0() {
    return;
}

void ATPG_JustifyNOR_InputBShouldBe1() {
    return;
}

void ATPG_JustifyXOR_ShouldSucceed() {
    return;
}

void ATPG_JustifyXOR_InputAShouldBe0() {
    return;
}

void ATPG_JustifyXOR_InputAShouldBe1() {
    return;
}

void ATPG_JustifyXOR_InputBShouldBe0() {
    return;
}

void ATPG_JustifyXOR_InputBShouldBe1() {
    return;
}

void ATPG_JustifyXNOR_ShouldSucceed() {
    return;
}

void ATPG_JustifyXNOR_InputAShouldBe0() {
    return;
}

void ATPG_JustifyXNOR_InputAShouldBe1() {
    return;
}

void ATPG_JustifyXNOR_InputBShouldBe0() {
    return;
}

void ATPG_JustifyXNOR_InputBShouldBe1() {
    return;
}

void TopSort_TestCase1_ShouldSucceed() {
    Wire in0, in1, out0;
    
    Gate g0(AND, {&in0, &in1}, &out0);

    std::vector<Node*> inputNetList = {&in0, &in1, &g0, &out0};
    std::vector<Node*> outputNetList;
    
    TopSort(inputNetList, outputNetList);

    std::vector<int> outputIdList;
    for (int i = 0; i < outputNetList.size(); i++) { 
        outputIdList.push_back(outputNetList.at(i)->GetID());
    }

    ATPG_UTL.AssertEqual({in1.GetID(), in0.GetID(), g0.GetID(), out0.GetID()}, outputIdList);
}

void TopSort_TestCase2_ShouldSucceed() {
    Wire ww, wv, wx, wy, wz;

    // Gate type does not matter in this test
    Gate gw(AND, {&wz}, &ww);
    Gate gv(AND, {&ww}, &wv);
    Gate gx(AND, {}, &wx);
    Gate gy(AND, {&wx}, &wy);
    Gate gz(AND, {&wy}, &wz);

    std::vector<Node*> inputNetList = {&ww, &wv, &wx, &wy, &wz, &gw, &gv, &gx, &gy, &gz};
    std::vector<Node*> outputNetList;
    
    TopSort(inputNetList, outputNetList);

    Gate* gate = nullptr;
    std::vector<int> outputIdList;
    for (int i = 0; i < outputNetList.size(); i++) { 
        gate = dynamic_cast<Gate*>(outputNetList.at(i));
        if (gate != nullptr) {
            outputIdList.push_back(outputNetList.at(i)->GetID());
        }
    }

    ATPG_UTL.AssertEqual({gx.GetID(), gy.GetID(), gz.GetID(), gw.GetID(), gv.GetID()}, outputIdList);
}
