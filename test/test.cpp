/**
 * @breif: Main
 * @author Bhargavi
 * @version 1.0
 */
#include <gtest/gtest.h>
#include "../include/pidcont.hpp"
// #include "../include/pidcont_test.hpp"
// #include "../app/pidcont.cpp"

/*
 * @brief 
 */
//Kp = 0.5;Ki = 0.05;Kd = 1;perr = 0;err = 0;
//targetvelo = 10
//actualvelo = 2
//computenew_velo(double targetvelo, double actuvelo, double Kp_input, double Ki_input, double Kd_input) {

TEST(firsttest, unity) {
  EXPECT_EQ(1,1);
}

/*
 * @brief Test if the integral element is behaving correctly
 */
TEST(secondtest, unitTest2) {
  pidcont a;
  float temp = a.computenew_velo(10, 2, 0.5, 0.05, 1);	
  EXPECT_FLOAT_EQ(temp, 12.4);
  //EXPECT_EQ(1,1);
}  
TEST(thirdtest,unittest3) {
    EXPECT_EQ(1,1);
}