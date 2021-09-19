//! "Copyright [2021] None"
/*
 * @file SoftwareEngineering_3_10.h
 * @author PratikBhujbal
 * @date 16 September 2021
 * @brief Week3 assingment problem 3.10 from SoftwareEngineering book
 * @section DESCRIPTION
 * Header file for CourseGrading class
 */

#ifndef INCLUDE_SOFTWAREENGINEERING_3_10_H_
#define INCLUDE_SOFTWAREENGINEERING_3_10_H_

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
/**
 *  @brief Class for course grading
 */
class CourseGrading {
 private:
  std::vector<int> studentName;  ///< Vector for student names
  std::vector<double> studentGrade;  ///< Vector for student grades

 public:
  /**
   *   @brief  Lists all the students and their grades
   *
   *   @param  none
   *   @return void
   */
  void ListAll() {
    studentName = { 0, 3, 6, 9, 12 };
    studentGrade = { 50, 80, 95, 55, 78 };  // Student grade from 0-100
    std::cout << "Here is the List of Students and their respective grades"
              << std::endl;
    for (unsigned int i = 0; i < studentName.size(); i++) {
      std::cout << "StudentId " << studentName.at(i) << " " << "-- Grade "
                << studentGrade.at(i) << std::endl;
    }
  }
  /**
   * @brief Function to change grade using student id
   *
   * @param studentName whose grade needs to be changed
   * @param grade as new grade input  in double
   * @return updated list of student and their grades
   */
  void ChangeGrade() {
    std::cout << "Enter Student Id to modify grade for that student"
              << std::endl;
    int Studentid;
    std::cin >> Studentid;
    std::cout << "Enter grade (from 30-100)" << std::endl;
    double grade;
    std::cin >> grade;

    std::vector<int>::iterator id;
    id = std::find(studentName.begin(), studentName.end(), Studentid);
    if (id != studentName.end()) {
      studentGrade.at(id - studentName.begin()) = grade;
      std::cout << "Revised Grade:" << std::endl;
      // Iterates and prints student id with their grade
      for (unsigned int i = 0; i < studentName.size(); i++) {
        std::cout << "StudentId " << studentName.at(i) << " " << "-- Grade "
                  << studentGrade.at(i) << std::endl;
        std::cout << " " << std::endl;
      }
      CalculateGradePoint();
    } else {
      std::cout << "Invalid Student Id!!. Please Enter correct Id" << std::endl;
      std::cout << " " << std::endl;
      ChangeGrade();
    }
  }
  /**
   * @brief Calculates average grade point for the class
   *
   * @param nonerade point
   * @return averagge g
   */
  void CalculateGradePoint() {
    double averageGradePoint;
    double sum = accumulate(studentGrade.begin(), studentGrade.end(), 0);
    averageGradePoint = (sum) / studentGrade.size();
    std::cout << "Average Grade Point for the class= " << averageGradePoint
              << std::endl;
  }
};

#endif  // INCLUDE_SOFTWAREENGINEERING_3_10_H_

