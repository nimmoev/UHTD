#include "UHTDTests.h"

std::vector<void (*)()> UHTDTestFunctionVector = {
    Frontend_ChoiceIsEmpty_ShouldFail,
    Frontend_ChoiceHasChar_ShouldFail,
    Frontend_ChoiceHasSymbol_ShouldFail,
    Frontend_ChoiceIsNegative_ShouldFail,
    Frontend_ChoiceIsZero_ShouldFail,
    Frontend_ChoiceIsGreaterThanOptions_ShouldFail,
    Frontend_ChoiceIsImport_ShouldSucceed,
    Frontend_ChoiceIsImport_ShouldBeImport,
    Frontend_ChoiceIsTestVector_ShouldSucceed,
    Frontend_ChoiceIsTestVector_ShouldBeTestVector,
    Frontend_ChoiceIsControllabilityObservability_ShouldSucceed,
    Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability,
    Frontend_ChoiceIsQuit_ShouldSucceed,
    Frontend_ChoiceIsQuit_ShouldBeQuit
};

std::vector<std::string> UHTDTestNameVector = {
    "Frontend_ChoiceIsEmpty_ShouldFail",
    "Frontend_ChoiceHasChar_ShouldFail",
    "Frontend_ChoiceHasSymbol_ShouldFail",
    "Frontend_ChoiceIsNegative_ShouldFail",
    "Frontend_ChoiceIsZero_ShouldFail",
    "Frontend_ChoiceIsGreaterThanOptions_ShouldFail",
    "Frontend_ChoiceIsImport_ShouldSucceed",
    "Frontend_ChoiceIsImport_ShouldBeImport",
    "Frontend_ChoiceIsTestVector_ShouldSucceed",
    "Frontend_ChoiceIsTestVector_ShouldBeTestVector",
    "Frontend_ChoiceIsControllabilityObservability_ShouldSucceed",
    "Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability",
    "Frontend_ChoiceIsQuit_ShouldSucceed",
    "Frontend_ChoiceIsQuit_ShouldBeQuit"
};

UnitTestList UHTD_UTL("UHTD Unit Tests", UHTDTestFunctionVector, UHTDTestNameVector);

void Frontend_ChoiceIsEmpty_ShouldFail() {
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("", toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceHasChar_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("1a", toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceHasSymbol_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("1!", toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsNegative_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("-1", toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsZero_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("0", toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsGreaterThanOptions_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum(std::to_string(toolPrompts.size() + 1), toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsImport_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(IMPORT), toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsImport_ShouldBeImport() { 
    int res = 0;
    ParseStrToRangedNum(std::to_string(IMPORT), toolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, IMPORT);
}

void Frontend_ChoiceIsTestVector_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(TESTVECTORS), toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsTestVector_ShouldBeTestVector() {
    int res = 0;
    ParseStrToRangedNum(std::to_string(TESTVECTORS), toolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, TESTVECTORS);
}

void Frontend_ChoiceIsControllabilityObservability_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(COTD), toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability() {
    int res = 0;
    ParseStrToRangedNum(std::to_string(COTD), toolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, COTD);
}

void Frontend_ChoiceIsQuit_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(QUIT), toolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsQuit_ShouldBeQuit() { 
    int res = 0;
    ParseStrToRangedNum(std::to_string(QUIT), toolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, QUIT);
}

int main() {
    BGL_UTL.RunTests();
    UHTD_UTL.RunTests();
}