#include <string>
#include <vector>

// Function to execute the exit command
int exitCommand(std::vector<std::string> args) {
    return args.size() > 1 ? std::stoi(args[1]) : 0;
}