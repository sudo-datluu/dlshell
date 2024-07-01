#include <string>
#include <vector>
#include <iostream>
#include "../Command.hpp"
#include "../commandMapper.hpp"

void getCommandType(Command command, std::string cmdString);

void typeCommand(std::vector<std::string> args) {
    if (args.size() == 1) {
        return;
    }
    // Get the command type
    for (int i = 1; i < args.size(); i++) {
        getCommandType(stringToCommand(args[i]), args[i]);
    }
}

void getCommandType(Command command, std::string cmdString ) {
    switch (command) {
    case Command::unrecognized:
        std::cout << cmdString << ": not found" << std::endl;
        break;
    default:
        std::cout << cmdString << ": is a shell builtin" << std::endl;
        break;
    }
}