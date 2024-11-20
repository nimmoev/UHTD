#ifndef FRONTEND_H
#define FRONTEND_H

#include <iostream>
#include <string>

#include "Error.h"

enum tool {IMPORT = 1, ATPG = 2, COTD = 3, QUIT = 4};

extern std::vector<std::string> toolPrompts;

std::string GetInput();
int ParseStrToRangedNum(std::string input, int max, int *result);

#endif
