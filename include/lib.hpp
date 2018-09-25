#pragma once
/**
 *  @file    lib.hpp
 *  @author  Mayank Pathak
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief Test-Driven Development 4 exercise (with partner component)
 *
 *  @section DESCRIPTION
 *
 *  This is the header file to declare the controller class for PID controller
 *  for Week 4 exercise.
 *
 */

#include <iostream>
/** 
 * @brief Class that compute the PID.
 */
class Controller {
 private:
  double kP = 0.0;  // Gain variables as double
  double kI = 0.0;  // Gain variables as double
  double kD = 0.0;  // Gain variable as double
  double prevError = 0.0;  // previous time-state error
  double intgError = 0.0;  // integral error
  double dt = 0.1;  // time step
  double currentState = 0;
  double controlOutput = 0;
  bool initialized = false;

 public:
  /**
   * @brief      Constructor for initializing the class
   */
  Controller();

  /**
   * @brief      Function to check function initialization
   */
  bool isInitialized();

  /**
   * @brief      Constructs the override object to set all gains
   * @param      kP  The proportional gain as double
   * @param      kI  The integral gain as double
   * @param      kD  The derivative gain as double
   */
  Controller(double kP, double kI, double kD);

  /**
   * @brief      Method for computing multiple step PID
   * @param      Target  The target state as double
   * @return     none
   */
  void compute(double target, double currentstate);

  /**
   * @brief      Method to get proportional gain
   * @return     proportional gain as double
   */
  double getkP();

  /**
   * @brief      Method to set proportional gain
   * @param      kP  The proportional gain as double
   * @return     none
   */
  void setkP(double kp);

  /**
   * @brief      Method to get derivative gain
   * @return     derivative gain as double
   */
  double getkI();

  /**
   * @brief      Method to set derivative gain
   * @param      kD  The derivative gain as double
   * @return     none
   */
  void setkI(double ki);

  /**
   * @brief      Method to get integral gain
   * @return     integral gain as double
   */
  double getkD();

  /**
   * @brief      Method to set integral gain
   * @param      kI  The integral gain as double
   * @return     none
   */
  void setkD(double kd);

  /**
   * @brief      Method to set output state
   * @param      state (output)
   * @return     None
   */
  void setState(double currentstate);

  /**
   * @brief      Method to return output state
   * @param      None
   * @return     double
   */
  double returnState();

  /**
   * @brief      Destructor of the class
   */
  ~Controller();
};
