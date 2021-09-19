//! "Copyright [2021] None"
/**
 * @file AcceleratedC++_4_5.cpp
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem 4.7 from Accelerated C++ book
 * @section DESCRIPTION
 *
 *This is a program that reads from a vector with initial values
 *presented and outputs the average of the numbers.
 *
 */

// CPP Headers
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

int main() {
  std::vector<double> inputNumbers = { 50, 60, 40.1, 87.0 };
  std::cout << "Average = ";
  // Accumulate the numbers into average and divides with total size
  std::cout
      << (accumulate(inputNumbers.begin(), inputNumbers.end(), 0))
          / inputNumbers.size()
      << std::endl;
  return 0;
}
