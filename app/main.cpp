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
 *  This is the main file for the PID controller implementation.
 *
 * @dependencies: This file needs "PID_controller.cpp" ,and
 *                "lib.hpp"
 */
#include "lib.hpp"
#include "iostream"
#include "memory"
/**
 * @brief      Main function
 *
 * @return     return 0
 */
int main() {
  Controller PID(0.1, 0.001, 0.05);  // kP, kI, kD
  PID.compute(12);  // Target Value
  std::cout << "Final State:" << PID.returnState() << std::endl;
  return 0;
}
