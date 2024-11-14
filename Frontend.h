#ifndef FRONTEND_H
#define FRONTEND_H

#include <string>

#include "Error.h"

std::string GetInput();
int ParseStrToRangedNum(std::string input, int min, int max, int *result);

#endif
