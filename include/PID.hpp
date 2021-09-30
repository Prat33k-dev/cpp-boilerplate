/**
 *  @copyright (c) 2021 Sumedh Koppula, Pratik
 *  @file    PID.hpp
 *  @author  Sumedh Koppula, Pratik
 *
 *  @brief Declaration of the PID class and its members 
 * 
 */

#pragma once

#include<iostream>

/**
 * @brief The class PIDController has private members Kp, Ki, Kd, and a public member
 * function to compute the new velocity given the input parameters such as
 * targetSetpoint and actualVelocity
 *
 */
class PIDController{
 double Kp;
 double Ki;
 double Kd;

 public:

 PIDController(double kp, double ki, double kd) : Kp(kp), Ki(ki), Kd(kd) {}

/**
   * @brief Computes the output based on the defined gains.
   *
   * @param targetSetpoint A double which holds the target value
   * @param actualVelocity A double which Holds the actual value
   * @return A double which outputs computed using the gains.
   */
 double compute(double targetSetpoint, double actualVelocity);
};