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

}

// Override constructor to set all const
Controller::Controller(double kP, double kI, double kD) {

}

// Function to check initialization
bool Controller::isInitialized() {

}

// PID compute
void Controller::compute(double target) {

}

// set kP
void Controller::setkP(double kP) {
 
}

// set kP
void Controller::setkD(double kD) {

}

// set kI
void Controller::setkI(double kI) {

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
void Controller::setState(double controlOutput) {

  // return state;
}

// return state (output)
double Controller::returnState() {

}

// Default Destructor
Controller::~Controller() {

}
