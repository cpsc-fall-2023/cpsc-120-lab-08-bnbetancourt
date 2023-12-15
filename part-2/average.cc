// Benjamin Betancourt
// bdbetancourt@csu.fullerton.edu
// @bnbetancourt
// Partners:

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Validate that there is at least one command line argument.
  if (argc < 2) {
    std::cout << "Error: At least one command line argument is required.\n";
    return 1;
  }

  // Sum all of the command line arguments.
  double sum = 0.0;
  for (int i = 1; i < argc; ++i) {
    try {
      sum += std::stod(arguments[i]);
    } catch (std::invalid_argument& e) {
      std::cerr << "Error: Invalid argument at index " << i
                << ". Argument must be a number.\n";
      return 1;
    } catch (std::out_of_range& e) {
      std::cerr << "Error: Argument at index " << i
                << " is out of the valid range for double.\n";
      return 1;
    }
  }

  // Calculate the average of the values.
  double average = sum / (argc - 1);

  // Use cout to print out the average.
  std::cout << "Average = " << average << "\n";

  return 0;
}
