//! "Copyright [2021] None"
/**
 * @file AcceleratedC++_4_5.cpp
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem  rom Accelerated C++ book
 * @section DESCRIPTION
 *
 * This is a program that reads from a standard input stream
 * for a list of words and prints out the resulting concatenated
 * string of the words.
 */

// CPP Headers
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

void unary_func(std::string i) {
  std::cout << ' ' << i;
}
int main() {
  std::vector<std::string> inputWords = { "My", "Name", "is", "Pratik" };
  // Prints concatenated string
  std::cout << "\nThe concatenate of all vector elements is: ";
  for_each(inputWords.begin(), inputWords.end(), unary_func);
  std::cout << '\n';
  return 0;
}
