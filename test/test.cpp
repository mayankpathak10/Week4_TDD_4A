/**
 *  @file    test.cpp
 *  @author  Mayank Pathak
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief est-Driven Development exercise (with partner component)
 *
 *  @section DESCRIPTION
 *
 *  This is test file to declare the test cases for the PID controller
 *
 */

#include <gtest/gtest.h>
#include <memory>
#include "lib.hpp"

std::shared_ptr<Controller>
    PID_Controller;  ///< Shared pointer for Controller class as PID_Controller

/**
 * @brief Class initialization test
 */
TEST(PIDTests, initializationTest) {
  PID_Controller = std::make_shared<Controller>();

  EXPECT_TRUE(PID_Controller->isInitialized());
}

/**
 * @brief Class's get and set function test
 */
TEST(PIDTests, valuesTest) {
  PID_Controller = std::make_shared<Controller>(<actualkP>, <actualkI>, <actualkD>);

  EXPECT_NEAR(PID_Controller->getkP(), <actual>, <range>);
  EXPECT_NEAR(PID_Controller->getkI(), <actual>, <range>);
  EXPECT_NEAR(PID_Controller->getkD(), <actual>, <range>);
}

/**
 * @brief Test the convergence of logic
 */
TEST(PIDTests, computeTest) {
  PID_Controller = std::make_shared<Controller>(<kP>, <kI>, <kD>);

  PID_Controller->compute(<target>);

  EXPECT_NEAR(PID_Controller->returnState(), 11.9979, 0.0021);
}
