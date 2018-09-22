/**
 *  @file    main.cpp
 *  @author  Mayank Pathak
 *  @version 1.0
 *  @copyright GNU Public License
 *
 *  @brief est-Driven Development exercise (with partner component)
 *
 *  @section DESCRIPTION
 *
 *  This is the main file for initiating all the tests.
 *
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
