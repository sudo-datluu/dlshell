#include "Command.hpp"
#include <string>

// Function to map a string to a Command enum
Command stringToCommand(std::string commandString) {
    if (commandString == "exit") {
        return Command::exitCmd;
    }
    if (commandString == "echo") {
        return Command::echo;
    }
    if (commandString == "type") {
        return Command::typeCmd;
    }
    return Command::unrecognized;
};
