//! "Copyright [2021] None"
/**
 * @file AcceleratedC++_4_5.cpp
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem 4.5 from Accelerated C++ book
 * @section DESCRIPTION
 *
 * This is a program that reads from a standard input stream
 * for a list of words and stores them. The program returns
 * the total number of words entered and also the frequency
 * of each word entered.
 *
 */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/**
 *   @brief  Reads from input stream and stores the strings into a vector
 *           Also prints the total number of words entered and the frequency
 *           of each word.
 *
 *   @param  inputStream is the vector that will contain input stream
 *   @return void
 */
void inputWords() {
  std::vector<std::string> inputStream;  ///< vector to store input stream
  std::cout << "Enter the words- " << std::endl;
  std::string word;
  // getline function to read entire line stream from user input
  getline(std::cin, word);
  std::istringstream wordStream(word);
  std::string words;
  // Append the inputStream vector with the entered words
  while (wordStream >> words) {
    inputStream.push_back(words);
  }
  // Outputs total no. of words
  std::cout << "Total number of words= " << inputStream.size() << std::endl;
  // Calculate frequency by iterating over the vector
  std::vector<std::string> iter = inputStream;
  do {
    std::string val = iter[0];
    int freq = count(iter.begin(), iter.end(), val);
    std::cout << val << " occurred " << freq << " time(s)" << std::endl;
    iter.erase(std::remove(iter.begin(), iter.end(), val), iter.end());
  } while (iter.size() != 0);
}
int main() {
  inputWords();
  return 0;
}
