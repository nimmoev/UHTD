#ifndef UHTD_TESTS_H
#define UHTD_TESTS_H

#include "../BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "UHTD.h"

int main();

UnitTestList UTL(UHTDTestFunctionVector, UHTDTestNameVector);
// To add a new test, follow these instructions:
//  1. Declare a parameter-less type of void 
//  2. Append that function to UHTDTestFunctionVector
//  3. Append a string of the same name as the function to UHTDTestNameVector

void Frontend_ChoiceIsEmpty_ShouldFail();
void Frontend_ChoiceIsChar_ShouldFail();
void Frontend_ChoiceIsSymbol_ShouldFail();
void Frontend_ChoiceHasChar_ShouldFail();
void Frontend_ChoiceHasSymbol_ShouldFail();
void Frontend_ChoiceIsNegative_ShouldFail();
void Frontend_ChoiceIsZero_ShouldFail();
void Frontend_ChoiceIsGreaterThanOptions_ShouldFail();
void Frontend_ChoiceIsImport_ShouldSucceed();
void Frontend_ChoiceIsTestVector_ShouldSucceed();
void Frontend_ChoiceIsControllabilityObservability_ShouldSucceed();

std::vector<void (*)()> UHTDTestFunctionVector = {
    Frontend_ChoiceIsEmpty_ShouldFail,
    Frontend_ChoiceIsChar_ShouldFail,
    Frontend_ChoiceIsSymbol_ShouldFail,
    Frontend_ChoiceHasChar_ShouldFail,
    Frontend_ChoiceHasSymbol_ShouldFail,
    Frontend_ChoiceIsNegative_ShouldFail,
    Frontend_ChoiceIsZero_ShouldFail,
    Frontend_ChoiceIsGreaterThanOptions_ShouldFail,
    Frontend_ChoiceIsImport_ShouldSucceed,
    Frontend_ChoiceIsTestVector_ShouldSucceed,
    Frontend_ChoiceIsControllabilityObservability_ShouldSucceed
};

std::vector<std::string> UHTDTestNameVector = {
    "Frontend_ChoiceIsEmpty_ShouldFail",
    "Frontend_ChoiceIsChar_ShouldFail",
    "Frontend_ChoiceIsSymbol_ShouldFail",
    "Frontend_ChoiceHasChar_ShouldFail",
    "Frontend_ChoiceHasSymbol_ShouldFail",
    "Frontend_ChoiceIsNegative_ShouldFail",
    "Frontend_ChoiceIsZero_ShouldFail",
    "Frontend_ChoiceIsGreaterThanOptions_ShouldFail",
    "Frontend_ChoiceIsImport_ShouldSucceed",
    "Frontend_ChoiceIsTestVector_ShouldSucceed",
    "Frontend_ChoiceIsControllabilityObservability_ShouldSucceed"
};

#endif