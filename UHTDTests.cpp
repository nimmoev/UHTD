#include "UHTDTests.h"

UnitTestList UHTD_UTL("UHTD Unit Tests", std::vector<UnitTest>({
    UnitTest(Frontend_ChoiceIsEmpty_ShouldFail, "Frontend_ChoiceIsEmpty_ShouldFail"),
    UnitTest(Frontend_ChoiceHasChar_ShouldFail, "Frontend_ChoiceHasChar_ShouldFail"),
    UnitTest(Frontend_ChoiceHasSymbol_ShouldFail, "Frontend_ChoiceHasSymbol_ShouldFail"),
    UnitTest(Frontend_ChoiceIsNegative_ShouldFail, "Frontend_ChoiceIsNegative_ShouldFail"),
    UnitTest(Frontend_ChoiceIsZero_ShouldFail, "Frontend_ChoiceIsZero_ShouldFail"),
    UnitTest(Frontend_ChoiceIsGreaterThanOptions_ShouldFail, "Frontend_ChoiceIsGreaterThanOptions_ShouldFail"),
    UnitTest(Frontend_ChoiceIsImport_ShouldSucceed, "Frontend_ChoiceIsImport_ShouldSucceed"),
    UnitTest(Frontend_ChoiceIsImport_ShouldBeImport, "Frontend_ChoiceIsImport_ShouldBeImport"),
    UnitTest(Frontend_ChoiceIsATPG_ShouldSucceed, "Frontend_ChoiceIsATPG_ShouldSucceed"),
    UnitTest(Frontend_ChoiceIsATPG_ShouldBeATPG, "Frontend_ChoiceIsATPG_ShouldBeATPG"),
    UnitTest(Frontend_ChoiceIsControllabilityObservability_ShouldSucceed, "Frontend_ChoiceIsControllabilityObservability_ShouldSucceed"),
    UnitTest(Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability, "Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability"),
    UnitTest(Frontend_ChoiceIsQuit_ShouldSucceed, "Frontend_ChoiceIsQuit_ShouldSucceed"),
    UnitTest(Frontend_ChoiceIsQuit_ShouldBeQuit, "Frontend_ChoiceIsQuit_ShouldBeQuit")
}));

int main() {
    BGL_UTL.RunTests();
    ATPG_UTL.RunTests();
    INPUT_UTL.RunTests();
    UHTD_UTL.RunTests();
}

void Frontend_ChoiceIsEmpty_ShouldFail() {
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("", g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceHasChar_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("1a", g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceHasSymbol_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("1!", g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsNegative_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("-1", g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsZero_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum("0", g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsGreaterThanOptions_ShouldFail(){ 
    UHTD_UTL.AssertNotEqual(ParseStrToRangedNum(std::to_string(g_Frontend_ToolPrompts.size() + 1), g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsImport_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(IMPORT), g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsImport_ShouldBeImport() { 
    int res = 0;
    ParseStrToRangedNum(std::to_string(IMPORT), g_Frontend_ToolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, IMPORT);
}

void Frontend_ChoiceIsATPG_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(ATPG), g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsATPG_ShouldBeATPG() {
    int res = 0;
    ParseStrToRangedNum(std::to_string(ATPG), g_Frontend_ToolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, ATPG);
}

void Frontend_ChoiceIsControllabilityObservability_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(COTD), g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsControllabilityObservability_ShouldBeControllabilityObservability() {
    int res = 0;
    ParseStrToRangedNum(std::to_string(COTD), g_Frontend_ToolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, COTD);
}

void Frontend_ChoiceIsQuit_ShouldSucceed() { 
    UHTD_UTL.AssertEqual(ParseStrToRangedNum(std::to_string(QUIT), g_Frontend_ToolPrompts.size(), nullptr), ERROR_NONE);
}

void Frontend_ChoiceIsQuit_ShouldBeQuit() { 
    int res = 0;
    ParseStrToRangedNum(std::to_string(QUIT), g_Frontend_ToolPrompts.size(), &res);
    UHTD_UTL.AssertEqual(res, QUIT);
}
