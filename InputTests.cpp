#include "InputTests.h"

UnitTestList INPUT_UTL("Input Unit Tests", std::vector<UnitTest>({
    UnitTest(IsCharInList_ShouldFail, "IsCharInList_ShouldFail"),
    UnitTest(IsCharInList_ShouldSucceed, "IsCharInList_ShouldSucceed"),
    UnitTest(IsStrInList_ShouldFail, "IsStrInList_ShouldFail"),
    UnitTest(IsStrInList_ShouldSucceed, "IsStrInList_ShouldSucceed"),
    UnitTest(LexicalAnalysis_ShouldFailStrEmpty, "LexicalAnalysis_ShouldFailStrEmpty"),
    UnitTest(LexicalAnalysisINV_ShouldSucceed, "LexicalAnalysisINV_ShouldSucceed"),
    UnitTest(LexicalAnalysisWire_ShouldReturnWire, "LexicalAnalysisWire_ShouldReturnWire"),
    UnitTest(LexicalAnalysisWireAndGate_ShouldReturnWireAndGate, "LexicalAnalysisWireAndGate_ShouldReturnWireAndGate"),
    UnitTest(LexicalAnalysisINV_ShouldReturnINVToken, "LexicalAnalysisINV_ShouldReturnINVToken"),
    UnitTest(LexicalAnalysisAND_ShouldReturn2InputANDToken, "LexicalAnalysisAND_ShouldReturn2InputANDToken"),
    UnitTest(LexicalAnalysisOR_ShouldReturn2InputORToken, "LexicalAnalysisOR_ShouldReturn2InputORToken"),
    UnitTest(LexicalAnalysisNAND_ShouldReturn2InputNANDToken, "LexicalAnalysisNAND_ShouldReturn2InputNANDToken"),
    UnitTest(LexicalAnalysisNOR_ShouldReturn2InputNORToken, "LexicalAnalysisNOR_ShouldReturn2InputNORToken"),
    UnitTest(LexicalAnalysisXOR_ShouldReturn2InputXORToken, "LexicalAnalysisXOR_ShouldReturn2InputXORToken"),
    UnitTest(LexicalAnalysisXNOR_ShouldReturn2InputXNORToken, "LexicalAnalysisXNOR_ShouldReturn2InputXNORToken"),
    UnitTest(LexicalAnalysisAND_ShouldReturn3InputANDToken, "LexicalAnalysisAND_ShouldReturn3InputANDToken"),
    UnitTest(LexicalAnalysisOR_ShouldReturn3InputORToken, "LexicalAnalysisOR_ShouldReturn3InputORToken"),
    UnitTest(LexicalAnalysisNAND_ShouldReturn3InputNANDToken, "LexicalAnalysisNAND_ShouldReturn3InputNANDToken"),
    UnitTest(LexicalAnalysisNOR_ShouldReturn3InputNORToken, "LexicalAnalysisNOR_ShouldReturn3InputNORToken"),
    UnitTest(LexicalAnalysisXOR_ShouldReturn3InputXORToken, "LexicalAnalysisXOR_ShouldReturn3InputXORToken"),
    UnitTest(LexicalAnalysisXNOR_ShouldReturn3InputXNORToken, "LexicalAnalysisXNOR_ShouldReturn3InputXNORToken")
}));

void IsCharInList_ShouldFail() {
    const std::vector<char> list = {'a', 'b'};
    INPUT_UTL.AssertFalse(IsCharInList('c', list));
}

void IsCharInList_ShouldSucceed() {
    const std::vector<char> list = {'a', 'b'};
    INPUT_UTL.AssertTrue(IsCharInList('b', list));
}

void IsStrInList_ShouldFail() {
    const std::vector<std::string> list = {"hello", "hi"};
    INPUT_UTL.AssertFalse(IsStrInList("boo", list));
}

void IsStrInList_ShouldSucceed() {
    const std::vector<std::string> list = {"hello", "hi"};
    INPUT_UTL.AssertTrue(IsStrInList("hi", list));
}

void LexicalAnalysis_ShouldFailStrEmpty() {
    std::vector<Token> tokens; 
    int res = LexicalAnalysis("", tokens);
    INPUT_UTL.AssertEqual(res, ERROR_EMPTY_STR);
}

void LexicalAnalysisINV_ShouldSucceed() {
    std::vector<Token> tokens; 
    int res = LexicalAnalysis("a <= !b;", tokens);
    INPUT_UTL.AssertEqual(res, ERROR_NONE);
}

void LexicalAnalysisWire_ShouldReturnWire() {
    std::vector<Token> tokens; 
    LexicalAnalysis("wire a;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[KEYWORD,wire]", "[UNKNOWN,a]", "[SEPARATOR,;]"});
}

void LexicalAnalysisWireAndGate_ShouldReturnWireAndGate() {
    std::vector<Token> tokens; 
    LexicalAnalysis("Wire a, b;\na <= not(b);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[KEYWORD,Wire]", "[UNKNOWN,a]", "[SEPARATOR,,]", "[UNKNOWN,b]", "[SEPARATOR,;]", "[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisINV_ShouldReturnINVToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisAND_ShouldReturn2InputANDToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= b and c;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[UNKNOWN,b]", "[OPERATOR,and]", "[UNKNOWN,c]", "[SEPARATOR,;]"});
}

void LexicalAnalysisOR_ShouldReturn2InputORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= b or c;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[UNKNOWN,b]", "[OPERATOR,or]", "[UNKNOWN,c]", "[SEPARATOR,;]"});
}

void LexicalAnalysisNAND_ShouldReturn2InputNANDToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b and c);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[OPERATOR,and]", "[UNKNOWN,c]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisNOR_ShouldReturn2InputNORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b or c);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[OPERATOR,or]", "[UNKNOWN,c]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisXOR_ShouldReturn2InputXORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= b xor c;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[UNKNOWN,b]", "[OPERATOR,xor]", "[UNKNOWN,c]", "[SEPARATOR,;]"});
}

void LexicalAnalysisXNOR_ShouldReturn2InputXNORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b xor c);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[OPERATOR,xor]", "[UNKNOWN,c]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisAND_ShouldReturn3InputANDToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= b and c and d;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[UNKNOWN,b]", "[OPERATOR,and]", "[UNKNOWN,c]", "[OPERATOR,and]", "[UNKNOWN,d]", "[SEPARATOR,;]"});
}

void LexicalAnalysisOR_ShouldReturn3InputORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= b or c or d;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[UNKNOWN,b]", "[OPERATOR,or]", "[UNKNOWN,c]", "[OPERATOR,or]", "[UNKNOWN,d]", "[SEPARATOR,;]"});
}

void LexicalAnalysisNAND_ShouldReturn3InputNANDToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b and c and d);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[OPERATOR,and]", "[UNKNOWN,c]", "[OPERATOR,and]", "[UNKNOWN,d]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisNOR_ShouldReturn3InputNORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b or c or d);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[OPERATOR,or]", "[UNKNOWN,c]", "[OPERATOR,or]", "[UNKNOWN,d]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}

void LexicalAnalysisXOR_ShouldReturn3InputXORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= b xor c xor d;", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[UNKNOWN,b]", "[OPERATOR,xor]", "[UNKNOWN,c]", "[OPERATOR,xor]", "[UNKNOWN,d]", "[SEPARATOR,;]"});
}

void LexicalAnalysisXNOR_ShouldReturn3InputXNORToken() {
    std::vector<Token> tokens; 
    LexicalAnalysis("a <= not(b xor c xor d);", tokens);
    INPUT_UTL.AssertEqual(GetStrList(tokens), {"[UNKNOWN,a]", "[OPERATOR,<=]", "[OPERATOR,not]", "[SEPARATOR,(]", "[UNKNOWN,b]", "[OPERATOR,xor]", "[UNKNOWN,c]", "[OPERATOR,xor]", "[UNKNOWN,d]", "[SEPARATOR,)]", "[SEPARATOR,;]"});
}
