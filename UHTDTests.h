#ifndef UHTD_TESTS_H
#define UHTD_TESTS_H

#include "ATPGTests.h"
#include "BasicGateLib/BasicGateLibTests.h"
#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "Error.h"
#include "Frontend.h"

int main();

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to UHTDTestFunctionVector in source file
//  4. Append a string of the same name as the test function to UHTDTestNameVector in source file

extern std::vector<void (*)()> UHTDTestFunctionVector;
extern std::vector<std::string> UHTDTestNameVector;
extern UnitTestList UHTD_UTL;

void Frontend_ChoiceIsEmpty_ShouldFail();
void Frontend_ChoiceHasChar_ShouldFail();
void Frontend_ChoiceHasSymbol_ShouldFail();
void Frontend_ChoiceIsNegative_ShouldFail();
void Frontend_ChoiceIsZero_ShouldFail();
void Frontend_ChoiceIsGreaterThanOptions_ShouldFail();
void Frontend_ChoiceIsImport_ShouldSucceed();
void Frontend_ChoiceIsImport_ShouldBeImport();
void Frontend_ChoiceIsATPG_ShouldSucceed();
void Frontend_ChoiceIsATPG_ShouldBeATPG();
void Frontend_ChoiceIsControllabilityObservability_ShouldSucceed();
void Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability();
void Frontend_ChoiceIsQuit_ShouldSucceed();
void Frontend_ChoiceIsQuit_ShouldBeQuit();

#endif