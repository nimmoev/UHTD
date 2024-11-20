#ifndef ATPGTESTS_H
#define ATPGTESTS_H

#include <vector>

#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "ATPG.h"

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to TVTestFunctionVector in source file
//  4. Append a string of the same name as the test function to TVTestNameVector in source file

extern std::vector<void (*)()> ATPGTestFunctionVector;
extern std::vector<std::string> ATPGTestNameVector;
extern UnitTestList ATPG_UTL;

void ATPG_JustifyNULL_ShouldFail();
void ATPG_JustifyUnconnectedInputsOutputs_ShouldFail();
void ATPG_JustifyUnconnectedInputs_ShouldFail();
void ATPG_JustifyUnconnectedOutputs_ShouldFail();
void ATPG_JustifyUNDEF_ShouldFail();
void ATPG_JustifyINV_ShouldSucceed();
void ATPG_JustifyINV_MoreThanOneInputShouldFail();
void ATPG_JustifyINV_InputAShouldBe0();
void ATPG_JustifyINV_InputAShouldBe1();
void ATPG_JustifyAND_OneInputShouldFail();
void ATPG_JustifyAND_ShouldSucceed();
void ATPG_JustifyAND_InputAShouldBe0();
void ATPG_JustifyAND_InputAShouldBe1();
void ATPG_JustifyAND_InputBShouldBe0();
void ATPG_JustifyAND_InputBShouldBe1();
void ATPG_JustifyOR_ShouldSucceed();
void ATPG_JustifyOR_InputAShouldBe0();
void ATPG_JustifyOR_InputAShouldBe1();
void ATPG_JustifyOR_InputBShouldBe0();
void ATPG_JustifyOR_InputBShouldBe1();
void ATPG_JustifyNAND_ShouldSucceed();
void ATPG_JustifyNAND_InputAShouldBe0();
void ATPG_JustifyNAND_InputAShouldBe1();
void ATPG_JustifyNAND_InputBShouldBe0();
void ATPG_JustifyNAND_InputBShouldBe1();
void ATPG_JustifyNOR_ShouldSucceed();
void ATPG_JustifyNOR_InputAShouldBe0();
void ATPG_JustifyNOR_InputAShouldBe1();
void ATPG_JustifyNOR_InputBShouldBe0();
void ATPG_JustifyNOR_InputBShouldBe1();
void ATPG_JustifyXOR_ShouldSucceed();
void ATPG_JustifyXOR_InputAShouldBe0();
void ATPG_JustifyXOR_InputAShouldBe1();
void ATPG_JustifyXOR_InputBShouldBe0();
void ATPG_JustifyXOR_InputBShouldBe1();
void ATPG_JustifyXNOR_ShouldSucceed();
void ATPG_JustifyXNOR_InputAShouldBe0();
void ATPG_JustifyXNOR_InputAShouldBe1();
void ATPG_JustifyXNOR_InputBShouldBe0();
void ATPG_JustifyXNOR_InputBShouldBe1();

#endif
