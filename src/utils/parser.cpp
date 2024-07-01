#include <string>
#include <vector>
#include <sstream>

// Parse the input string into a vector of strings
std::vector<std::string> parse(std::string input) {
    std::vector<std::string> args;
    std::istringstream iss(input);
    std::string arg;
    while (iss >> arg)
    {
      args.push_back(arg);
    }
    return args;
}