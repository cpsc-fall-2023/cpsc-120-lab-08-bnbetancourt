// Benjamin Betancourt
// bdbetancourt@csu.fullerton.edu
// @bnbetancourt
// Partners:

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that the number of arguments is correct.
  if (arguments.size() != 4) {
    std::cerr << "Error: Incorrect number of arguments. Usage: ./sandwich "
                 "PROTEIN BREAD CONDIMENT\n";
    return 1;  // Return a non-zero value to indicate an error
  }

  // Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  // Use cout to print output following the pattern
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";

  return 0;
}
