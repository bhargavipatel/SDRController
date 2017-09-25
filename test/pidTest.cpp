/**
 * @breif: Main
 * @author Bhargavi
 * @version 1.0
 */
#include <gtest/gtest.h>
#include "../include/pidcont.hpp"
#include "../include/pidcont_test.hpp"
#include "../app/pidcont.cpp"

/*
 * @brief 
 */
TEST(firsttest, unity) {
  EXPECT_EQ(1,1);
}

/*
 * @brief Test if the integral element is behaving correctly
 */
TEST(secondtest, unitTest2) {
  a = pidcont computenew_velo(0.01, 0.001, 0.01, 0.1, 0);
  EXPECT_NEAR(a, 0, 0.0001);
}