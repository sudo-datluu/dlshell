#include <string>
#include <vector>
#include <iostream>

void unrecognizedCommand(std::vector<std::string> args) {
    // Print the unrecognized command
    std::cout << args[0] << ": command not found" << std::endl;
}