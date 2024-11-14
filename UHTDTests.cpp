#include "UHTDTests.h"

UnitTestList UHTD_UTL("UHTD Unit Tests", UHTDTestFunctionVector, UHTDTestNameVector);

void Frontend_ChoiceIsEmpty_ShouldFail() {
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceHasChar_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("1a", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceHasSymbol_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("1!", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsNegative_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("-1", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsZero_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("0", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsGreaterThanOptions_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("10", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsImport_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum("1", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsImport_ShouldBeImport() { 
    int res = 0;
    ParseStrToRangedNum("1", 1, 4, &res);
    UHTD_UTL.AssertEqual(res, 1);
}

void Frontend_ChoiceIsTestVector_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum("2", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsTestVector_ShouldBeTestVector() {
    int res = 0;
    ParseStrToRangedNum("2", 1, 4, &res);
    UHTD_UTL.AssertEqual(res, 2);
}

void Frontend_ChoiceIsControllabilityObservability_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum("3", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability() {
    int res = 0;
    ParseStrToRangedNum("3", 1, 4, &res);
    UHTD_UTL.AssertEqual(res, 3);
}

void Frontend_ChoiceIsQuit_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum("4", 1, 4, nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsQuit_ShouldBeQuit() { 
    int res = 0;
    ParseStrToRangedNum("4", 1, 4, &res);
    UHTD_UTL.AssertEqual(res, 4);
}

int main() {
    BGL_UTL.RunTests();
    UHTD_UTL.RunTests();
}