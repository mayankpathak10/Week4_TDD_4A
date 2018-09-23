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

// CPP Headers
#include <iostream>
#include <cmath>

// Controller class
#include "lib.hpp"
/**
 * @brief      Main function that implements Controller class
 *
 * @return     return 0
 */
int main() {
  // Define initial and target states
  double targetState = 5.0;
  double initialState = 0.0;

  std::cout << "The target velocity is " << targetState
      << " and initial velocity is " << initialState << std::endl;

  // Define controller gain values
  double kP = 0.1;
  double kI = 0.5;
  double kD = 0.01;

  std::cout << "The controller proportional, integral and derivative gains are "
      << kP << " " << kI << " " << kD << " respectively" << std::endl;

  // Initialize PID controller object
  Controller myPIDController(kP, kI, kD);

  // Define initial current state and initial error of the system
  double currentState = initialState;  ///< Current state
  double error = targetState - currentState;  ///< Initial error

  // Compute the PID control outputs until error is less than 0.01
  while (std::abs(error) > 0.01) {
    // Compute PID control output
    myPIDController.compute(targetState, currentState);
    // Update the current state of the system
    currentState = myPIDController.returnState();
    std::cout << "The updated velocity of the system is " << currentState
        << std::endl;
    // Update error of the system
    error = targetState - currentState;
    std::cout << "The system error is " << error << std::endl;
  }

  std::cout << "PID controller process is complete!" << std::endl;

  return 0;
}
