/**
 * @file    main.cpp
 * @author  Mayank Pathak
 * @version 1.0
 * @copyright GNU Public License
 *
 * @brief Test-Driven Development 4 exercise (with partner component)
 *
 * @section DESCRIPTION
 *
 * This is the main file for the PID controller implementation.
 *
 * @dependencies: This file needs "PID_controller.cpp" ,and
 *                "lib.hpp"
 */
#include <iostream>
#include <cmath>
#include "lib.hpp"
/**
 * @brief      Main function
 *
 * @return     return 0
 */
int main() {

  // Define initial and target states
  double targetState = 10.0;
  double initialState = 0.0;

  // Define controller gain values
  double kP = 0.1;
  double kI = 0.5;
  double kD = 0.01;

  // Initialize PID controller object
  Controller myPIDController(kP, kI, kD);

  double currentState = initialState;
  double error = targetState - currentState;


  while (std::abs(error) > 0.01) {
    myPIDController.compute(targetState, currentState);
    currentState = myPIDController.returnState();
    error = targetState - currentState;
    std::cout << "The error now is: " << error << std::endl;
  }

  return 0;
}
