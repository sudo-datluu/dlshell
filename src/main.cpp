#include "commands/commandMapper.hpp"
#include "commands/exitCommand/exitCommand.hpp"
#include "commands/unrecognized/unrecognized.hpp"
#include "commands/echo/echoCommand.hpp"
#include "utils/parser.hpp"

#include <iostream>
#include <boost/algorithm/string.hpp>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  while (true) {
    std::cout << "$ ";

    std::string input;
    std::getline(std::cin, input);

    // Trim leading and trailing whitespace
    boost::trim(input);
    if (input.empty()) {
      continue;
    }

    // Parse the input string into a vector of strings
    std::vector<std::string> args = parse(input);

    switch (stringToCommand(args[0])) {
    case Command::unrecognized:
      unrecognizedCommand(args);
      break;
    case Command::exitCmd:
      return exitCommand(args);
    case Command::echo:
      echoCommand(args);
      break;
    }
  }
}
