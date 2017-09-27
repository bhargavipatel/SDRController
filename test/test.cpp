/**
 * @breif: Main
 * @author Bhargavi
 * @version 1.0
 */
#include <gtest/gtest.h>
#include <memory>

/**
 * @brief This is to test constructor for configuration
 * @author:Shaotu Jia
 */
#define private public
#include "../include/pidcont.hpp"
TEST(firstest, unitTest1) {
  auto controller = std::make_unique<pidcont>(0, 0, 0);
  EXPECT_EQ(controller->Kd, 0);
  EXPECT_EQ(controller->Ki, 0);
  EXPECT_EQ(controller->Kp, 0);
}
#undef private

/*
 * @brief Test if the integral element is behaving correctly
 */
TEST(secondtest, unitTest2) {
  pidcont a;
  float temp = a.computenew_velo(10, 2, 0.5, 0.05, 0.01);
  EXPECT_FLOAT_EQ(temp, 10);
}
