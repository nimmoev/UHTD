#include "Frontend.h"

std::vector<std::string> toolPrompts = {
    "Import Verilog File",
    "Generate Test Vectors",
    "Compute Controllability-Observability Scores",
    "Quit"
};

// Return string from std::cin
std::string GetInput() {
    std::string res;
    getline(std::cin, res);
    return res;
}

// Parse a string to retreive a number between 1 and (including) max. If successful, return ERROR_NONE and pass to result
int ParseStrToRangedNum(std::string input, int max, int *result) { 
    std::string numStr = "";
    int numInt = 0;
    for (int i = 0; i < input.size(); i++) {
        // If a character is not a number and not a space, give an error
        if (!isdigit(input.at(i)) && input.at(i) != ' ') {
            return ERROR_NONINT_PRESENT;
        }
        else if (input.at(i) == ' ') {
            continue;
        }
        else {
            numStr += input.at(i);
        }
    }

    if (numStr.empty()) { 
        return ERROR_EMPTY_STR;
    }

    numInt = std::stoi(numStr);
    if (numInt < 1 || numInt > max) {
        return ERROR_INT_OUT_OF_RANGE;
    }

    if (result != nullptr) {
        *result = numInt;
    }
    return ERROR_NONE;
}
