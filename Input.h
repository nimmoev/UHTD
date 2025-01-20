#ifndef INPUT_H
#define INPUT_H

#include <algorithm>
#include <string>
#include <vector>

#include "Error.h"
#include "UHTDClasses.h"

std::vector<std::string> GetStrList(std::vector<Token> tokenList);

bool IsCharInList(const char item, const std::vector<char> list);
bool IsStrInList(const std::string item, const std::vector<std::string> list);
void AddToken(TokenType tokenType, std::string tokenStr, std::vector<Token> &tokenList, bool &resetFlag);
bool AddTokenIfStrInList(TokenType tokenType, const std::string tokenVal, const std::vector<std::string> searchList, std::vector<Token> &tokenList, bool &resetFlag);
void AddTokenForNormalTokenTypes(const std::string tokenVal, std::vector<Token> &tokenList, bool &resetFlag);

int LexicalAnalysis(std::string str, std::vector<Token> &tokenList);

#endif
