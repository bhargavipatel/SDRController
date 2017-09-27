/**
 * @breif: PID Controller
 * @author Bhargavi
 * @version 1.0
 * @Copyright UMD
 */
#ifndef pidcont_HPP_
#define pidcont_HPP_

#include <iostream>
#include <cmath>

/**
 * @brief This class is for PID controller using for constant target velocity
 */
class pidcont {
 private:
     double Kp = 0.5;
     double Ki = 0.05;
     double Kd = 1;
     float perr = 0;
     float err = 0;
 public:
    double time = 0.001;
    pidcont();
    pidcont(double kp, double ki, double kd):Kp(kp), Ki(ki), Kd(kd){};
    ~pidcont();
    double computenew_velo(double target, double actualvelo, double kp, double ki, double kd);
};
#endif  // INCLUDE_PIDCONT_HPP //
