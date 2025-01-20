#include "Input.h"

const std::vector<char> g_KnownExcludedChars = {
    ' ',
    '\n'
};

const std::vector<char> g_KnownSeparators = {
    '(',
    ')',
    ',',
    ';'
};

const std::vector<std::string> g_KnownKeywords = {
    "wire",
    "Wire"
};

const std::vector<std::string> g_KnownOperators = {
    "<=",
    "not",
    "!",
    "and",
    "&",
    "or",
    "|",
    "xor",
    "^"
};

const std::map<TokenType, std::string> TokenTypeToStr = {
    {TOKENTYPE_ID, "ID"},
    {TOKENTYPE_KEYWORD, "KEYWORD"},
    {TOKENTYPE_OPERATOR, "OPERATOR"},
    {TOKENTYPE_SEPARATOR, "SEPARATOR"},
    {TOKENTYPE_UNKNOWN, "UNKNOWN"}
};

// Return a string list representing each Token in tokenList
std::vector<std::string> GetStrList(std::vector<Token> tokenList) {
    std::vector<std::string> result;
    for (int i = 0; i < tokenList.size(); i++) { 
        Token tempToken = tokenList.at(i);
        result.push_back("[" + TokenTypeToStr.at(tempToken.GetTokenType()) + "," + tempToken.GetTokenVal() + "]");
    }
    return result;
}

// Check if item is in list.
bool IsCharInList(const char item, const std::vector<char> list) {
    std::vector<char>::const_iterator charIt;
    charIt = std::find(list.begin(), list.end(), item);
    if (charIt != list.end()) { 
        return true;
    }
    return false;
}

// Check if item is in list.
bool IsStrInList(const std::string item, const std::vector<std::string> list) {
    std::vector<std::string>::const_iterator strIt;
    strIt = std::find(list.begin(), list.end(), item);
    if (strIt != list.end()) { 
        return true;
    }
    return false;
}

// Add a new Token to a list of Tokens and set a resetFlag
void AddToken(TokenType tokenType, std::string tokenStr, std::vector<Token> &tokenList, bool &resetFlag) { 
    tokenList.push_back(Token(tokenType, tokenStr));
    resetFlag = true;
}

// Check if tokenVal is in a String list, and if so add a new Token to our tokenList
bool AddTokenIfStrInList(TokenType tokenType, const std::string tokenVal, const std::vector<std::string> searchList, std::vector<Token> &tokenList, bool &resetFlag) { 
    if (IsStrInList(tokenVal, searchList)) { 
        AddToken(tokenType, tokenVal, tokenList, resetFlag);
        return true;
    }
    return false;
}

// Check and Add a Token for a String for the non-special cases
void AddTokenForNormalTokenTypes(const std::string tokenVal, std::vector<Token> &tokenList, bool &resetFlag) { 
    if (tokenVal.empty()) { 
        return;
    }
    if (AddTokenIfStrInList(TOKENTYPE_OPERATOR, tokenVal, g_KnownOperators, tokenList, resetFlag)) { 
        return;
    }
    if (AddTokenIfStrInList(TOKENTYPE_KEYWORD, tokenVal, g_KnownKeywords, tokenList, resetFlag)) { 
        return;
    }
    AddToken(TOKENTYPE_UNKNOWN, tokenVal, tokenList, resetFlag);
    return;
}

// Parse through string and return a List of Tokens
int LexicalAnalysis(std::string str, std::vector<Token> &tokenList) {
    int charCtr;
    bool reset = false, separatorFound = false;
    char currChar;
    std::string currStr;

    if (str.empty()) {
        return ERROR_EMPTY_STR;
    }

    for (charCtr = 0; charCtr < str.size(); charCtr++) { 
        // Reset our FSM if we have pushed a token to the tokenList
        if (reset) { 
            reset = false;
            separatorFound = false;
            currStr = "";
        }
        currChar = str.at(charCtr);
        
        // If we have a separator or an excluded character, then we can append 1-2 Tokens.
        separatorFound = IsCharInList(currChar, g_KnownSeparators);
        if (separatorFound || IsCharInList(currChar, g_KnownExcludedChars)) { 
            // Append a Token for currStr
            AddTokenForNormalTokenTypes(currStr, tokenList, reset);

            // If a excluded character was found, we should not add a Token for the char
            if (!separatorFound) { 
                continue;
            }

            // If a separator was found, we can input another Token for the separator
            currStr = currChar;
            AddToken(TOKENTYPE_SEPARATOR, currStr, tokenList, reset);
            continue;
        }

        // Otherwise, append our character and move on
        currStr += currChar;
    }
    return ERROR_NONE;
}