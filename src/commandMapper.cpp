#include "Command.hpp"
#include <string>

// Function to map a string to a Command enum
Command stringToCommand(std::string commandString) {
    if (commandString == "exit") {
        return Command::exitCommand;
    }
    return Command::unrecognized;
};