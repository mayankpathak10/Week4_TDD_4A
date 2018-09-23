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

#include "lib.hpp"

// Default constructor
Controller::Controller() {
  initialized = true;
}

// Override constructor to set all const
Controller::Controller(double kp, double ki, double kd) {
  initialized = true;
}

// Function to check initialization
bool Controller::isInitialized() {
  return initialized;
}

// PID compute
void Controller::compute(double target, double currentstate) {

}

// set kP
void Controller::setkP(double kp) {
 
}

// set kP
void Controller::setkD(double kd) {

}

// set kI
void Controller::setkI(double ki) {

}

// get kP
double Controller::getkP() {

}

// get kD
double Controller::getkI() {

}

// get kI
double Controller::getkD() {

}

// get state (output)
void Controller::setState(double currentstate) {

  // return state;
}

// return state (output)
double Controller::returnState() {

}

// Default Destructor
Controller::~Controller() {

}
