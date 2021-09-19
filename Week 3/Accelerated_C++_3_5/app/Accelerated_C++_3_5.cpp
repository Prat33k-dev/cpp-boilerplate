//! "Copyright [2021] None"
/**
 * @file AcceleratedC++_3_5.cpp
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem 3.5 from Accelerated C++ book
 * @section DESCRIPTION
 *
 *  This is a program that reads from a standard input stream
 *  for a list of students, homework grade and prints out the students' name and
 *  their corresponding final grade.
 */

#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> studentNames;  ///< Vector of student names
  std::vector<int> studentGrades;  ///< Vector of student final grades

  bool pushList = true;
  while ((pushList)) {
    std::cout << "Enter Student name: " << std::endl;
    std::string studentName;
    std::cin >> studentName;
    // Prompt user input for each student's name and grades
    studentNames.push_back(studentName);
    std::cout << "Enter your final exam grade (from 0-10):";
    int finalGrade;
    std::cin >> finalGrade;

    std::cout << "Enter your Homework grade (from 0-10):";
    int homeworkGrade;  ///< local int variables to hold homework grade
    std::cin >> homeworkGrade;
    double studentFinalGrade = 0.3 * homeworkGrade + 0.7 * finalGrade;
    studentGrades.push_back(studentFinalGrade);

    // Ask user if needs to add more
    std::cout << "Need to add more? (y/n)" << std::endl;
    char answer;
    std::cin >> answer;
    if (answer == 'n' || answer == 'N') {
      pushList = false;
      std::cout << "Final Result:" << std::endl;
      for (unsigned int i = 0; i < studentNames.size(); i++) {
        std::cout << " " << std::endl;
        std::cout << "Student Name: " << studentNames.at(i) << " " << "Grade: "
                  << studentGrades.at(i) << std::endl;
      }
    } else if (answer == 'y' || answer == 'Y') {
    } else {
      std::cout << "Please enter valid Input! " << std::endl;
      pushList = false;
    }

    return 0;
  }
}
