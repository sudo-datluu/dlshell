#include <string>
#include <vector>
#include <iostream>

// Function to echo the input string
void echoCommand(std::vector<std::string> args) {
    std::string output;
    for (size_t i = 1; i < args.size(); i++) {
        output += args[i];
        if (i != args.size() - 1) {
            output += " ";
        }
    }
    std::cout << output << std::endl;
}