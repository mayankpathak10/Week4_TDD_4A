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
  this->initialized = true;
}

// Override constructor to set all const
Controller::Controller(double kP, double kI, double kD) {
  this->setkP(kP);
  this->setkI(kI);
  this->setkD(kD);
}

// Function to check initialization
bool Controller::isInitialized() {
  return this->initialized;
}

// PID compute
void Controller::compute(double target) {
    auto controlOutput = target-this->error;  // a constant output as asked
    this->setState(controlOutput);
}

// set kP
void Controller::setkP(double kP) {
    this->kP = kP;
}

// set kP
void Controller::setkD(double kD) {
  this->kD = kD;
}

// set kI
void Controller::setkI(double kI) {
  this->kI = kI;
}

// get kP
double Controller::getkP() {
  return this->kP;
}

// get kD
double Controller::getkI() {
  return this->kI;
}

// get kI
double Controller::getkD() {
  return this->kD;
}

// get state (output)
void Controller::setState(double controlOutput) {
  state = controlOutput;
  // return state;
}

// return state (output)
double Controller::returnState() {
  this->controlOutput = this->state;
  return this->controlOutput;
}

// Default Destructor
Controller::~Controller() {
  this->initialized = false;
}
