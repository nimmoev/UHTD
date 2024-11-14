#include <iostream>
#include <string>

#include "Frontend.h"

// Return string from std::cin
std::string GetInput() {
    std::string res;
    getline(std::cin, res);
    return res;
}

// Parse a string to retreive a number between min and max. If successful, return ERROR_NONE and pass to result
int ParseStrToRangedNum(std::string input, int min, int max, int *result) { 
    std::string numStr = "";
    int numInt = 0;
    for (int i = 0; i < input.size(); i++) {
        // If a character is not a number and not a space, give an error
        if (!isdigit(input.at(i)) && input.at(i) != ' ') {
            return ERROR_GENERIC;
        }
        else if (input.at(i) == ' ') {
            break;
        }
        else {
            numStr += input.at(i);
        }
    }

    if (numStr.empty()) { 
        return ERROR_GENERIC;
    }

    numInt = std::stoi(numStr);
    if (numInt < min || numInt > max) {
        return ERROR_GENERIC;
    }

    if (result != nullptr) {
        *result = numInt;
    }
    return ERROR_NONE;
}
