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

#ifndef INCLUDE_CONTROLLER_HPP_
#define INCLUDE_CONTROLLER_HPP_

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
  Controller(const double& kP, const double& kI, const double& kD);

  /**
   * @brief      Method for computing multiple step PID
   * @param      Target  The target state as double
   * @return     none
   */
  void compute(const double& target, const double& currentstate);

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
  void setkP(const double& kp);

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
  void setkI(const double& ki);

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
  void setkD(const double& kd);

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
#endif   // INCLUDE_CONTROLLER_HPP_
