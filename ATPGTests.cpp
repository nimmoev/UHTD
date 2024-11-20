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
    "ATPG_JustifyXNOR_InputBShouldBe1"
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
