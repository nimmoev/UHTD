#ifndef UHTD_TESTS_H
#define UHTD_TESTS_H

#include <string>
#include <vector>

#include "ATPGTests.h"
#include "BasicGateLib/BasicGateLibTests.h"
#include "BasicGateLib/BasicTestLib/BasicTestLib.h"
#include "Error.h"
#include "Frontend.h"
#include "InputTests.h"

// To add a new test, follow these instructions:
//  1. Declare a parameter-less function of type void in header file
//  2. Define a parameter-less function of type void in source file
//  3. Append the test function to UHTD_UnitTests in source file as a UnitTest

extern UnitTestList UHTD_UTL;

int main();

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
