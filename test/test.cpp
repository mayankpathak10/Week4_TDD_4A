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
  PID_Controller = std::make_shared<Controller>(0.7, 0.6, 0.32);

  EXPECT_NEAR(PID_Controller->getkP(), 0.7, 0.00001);
  EXPECT_NEAR(PID_Controller->getkI(), 0.6, 0.00001);
  EXPECT_NEAR(PID_Controller->getkD(), 0.32, 0.00001);
}

/**
 * @brief Test the convergence of logic
 */
TEST(PIDTests, computeTest) {
  PID_Controller = std::make_shared<Controller>(0.7, 0.06, 0.32);

  PID_Controller->compute(12.0);

  EXPECT_NEAR(PID_Controller->returnState(), 11.9979, 0.0021);
}
