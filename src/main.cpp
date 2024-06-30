#include <iostream>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (true)
  {
    /* code */
    std::cout << "$ ";
    
    std::string input;
    std::getline(std::cin, input);
    
    // Print unregonized command
    std::cout << input << ": command not found"<< std::endl;
  }
  
}
