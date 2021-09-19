//! "Copyright [2021] None"
/*
 * @file SoftwareEngineering_3_10.cpp
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem 3.10 from SoftwareEngineering book
 * @section DESCRIPTION
 * This is a the main class for course grading.
 * A method that computes the grade point average.
 * And can change the student grade.
 */

// CPP Header for class
#include <SoftwareEngineering_3_10.h>

#include <iostream>

int main() {
  // Create class object
  CourseGrading grading;
  // Take input from user for grade modification and to calculate grade point
  grading.ListAll();
  std::cout << "Choose what you want to do?" << " (1/2/3)" << std::endl;
  std::cout << "1. Modify the grade." << std::endl;
  std::cout << "2. Calculate the grade point average for class." << std::endl;
  std::cout << "3. None." << std::endl;
  int answer;
  std::cin >> answer;
  if (answer == 1) {
    grading.ChangeGrade();
  } else if (answer == 2) {
    grading.CalculateGradePoint();
  } else if (answer == 3) {
    std::cout << "OK" << std::endl;
  } else {
    // Show invalid input if other than options
    std::cout << "Invalid Input!! (PLease give 1/2/3 in integer form)."
              << std::endl;
  }

  return 0;
}
