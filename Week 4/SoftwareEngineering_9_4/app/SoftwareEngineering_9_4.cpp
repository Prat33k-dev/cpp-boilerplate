//! "Copyright [2021] None"
/**
 * @file SoftwareEngineering_9_4.cpp
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem 9.4 from SoftwareEngineering C++ book
 * @section DESCRIPTION
 *
 *  This is a program that returns the position of
 *  the beginning of a given string in a given text.
 */

#include <iostream>

/**osition)
 *   @brief  Returns the position of string in the text
 *   @param  stringToFind is string to be searched in the text
 *   @return start position of string in text as int
 */
int pos(std::string givenStr, std::string stringToFind) {
  int position = givenStr.find(stringToFind);
  return position;
}
/**
 *   @brief  Prints the position of string in the text
 *   @param  stringToFind is string to be searched in the text
 *   @return void
 */
void printPosText(std::string givenStr, std::string stringToFind) {
  std::cout << pos(givenStr, stringToFind) << std::endl;
}
int main() {
  std::string givenStr = "pratik bhujbal";  ///< text string
  std::string stringToFind = "bhujbal";  ///< string to search in text string
  printPosText(givenStr, stringToFind);  // Function to print position
  return 0;
}

