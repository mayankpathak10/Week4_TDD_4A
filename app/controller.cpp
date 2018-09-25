/**
 * @file    PID_controller.cpp
 * @author  Mayank Pathak
 * @version 1.0
 * @copyright GNU Public License
 *
 * @brief Test-Driven Development 4 exercise (with partner component)
 *
 * @section DESCRIPTION
 *
 *  This is the library file, where all the methods of the controller class 
 *  for PID controller are defined for Week 4 exercise.
 * @dependencies: This file needs "lib.hpp"
 */

#include "controller.hpp"

// Default constructor
Controller::Controller() {
  initialized = true;
}

// Override constructor to set controller gains
Controller::Controller(double kp, double ki, double kd) {
  std::cout << "PID controller initialized!" << std::endl;
  // Assign the controller gains to member variables
  kP = kp;
  kD = kd;
  kI = ki;

  // Class initialized
  initialized = true;
}

// Function to check initialization
bool Controller::isInitialized() {
  return initialized;
}

// PID compute
void Controller::compute(double target, double currentstate) {
  double error = target - currentstate;  ///< Error
  intgError += error;  // Accumulate error for integral term
  double changeInError = (error - prevError) / dt;
  ///< Derivative of error

  /* Calculate PID control output
   u(t) = kp*e + ki*(summation of error over time)
   + kd*(change in error from previous time step) */
  controlOutput = kP * error + kI * intgError + kD * changeInError;

  prevError = error;  // Set previous error
}

// set kP
void Controller::setkP(double kp) {
  kP = kp;
}

// set kP
void Controller::setkD(double kd) {
  kD = kd;
}

// set kI
void Controller::setkI(double ki) {
  kI = ki;
}

// get kP
double Controller::getkP() {
  return kP;
}

// get kD
double Controller::getkI() {
  return kI;
}

// get kI
double Controller::getkD() {
  return kD;
}

// set state
void Controller::setState(double currentstate) {
  currentState = currentstate;
}

// return state (output)
double Controller::returnState() {
  // Return updated state of the system
  return controlOutput;
}

// Default Destructor
Controller::~Controller() {
}
