#include "UHTD.h"

bool g_UHTD_Quit = false;
std::vector<Node*> g_UHTD_NetList;

// Entrance point for Unified Hardware Trojan Detection Toolset
int main() {
    std::string input;
    int promptCtr, choice, error;
    do {
        error = ERROR_NONE;
        // Output basic prompt
        std::cout << "Enter number to choose a tool from below:" << std::endl;
        for (promptCtr = 0; promptCtr < g_Frontend_ToolPrompts.size(); promptCtr++) { 
            std::cout << promptCtr + 1 << ": " + g_Frontend_ToolPrompts.at(promptCtr) << std::endl;
        }

        // Receive input for prompt, verify it is an integer within our range
        input = GetInput();
        if (ParseStrToRangedNum(input, g_Frontend_ToolPrompts.size(), &choice) != ERROR_NONE) { 
            std::cout << "Choice is not a valid integer." << std::endl;
            continue;
        }
        std::cout << std::endl;

        // Call tool based upon the choice
        switch(choice) { 
            case IMPORT:
                std::cout << "Import Not Implemented." << std::endl;
                break;
            case ATPG:
                ATPGEntry(g_UHTD_NetList);
                break;
            case COTD:
                std::cout << "ComputeControllabilityObservability not implemented." << std::endl;
                break;
            case QUIT: 
                g_UHTD_Quit = true;
                break;
            default:
                std::cout << "Choice is a valid integer but not a valid tool." << std::endl;
                break;
        }
    } while (!g_UHTD_Quit);
    return 0;
}
