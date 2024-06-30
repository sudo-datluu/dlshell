#include <iostream>
#include "parser.hpp"
#include "commandMapper.hpp"

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  int exitCode = 0;
  while (true)
  {
    std::cout << "$ ";
    
    std::string input;
    std::getline(std::cin, input);

    // Parse the input string into a vector of strings
    std::vector<std::string> args = parse(input);

    switch (stringToCommand(args[0]))
    {
    case Command::exitCommand:
      exitCode = args.size() > 1 ? std::stoi(args[1]) : 0;
      return exitCode;
      // break;
    case Command::unrecognized:   
      // Print unregonized command
      std::cout << input << ": command not found" << std::endl;
      break;
    }
  }
  
}
