/**
 * @breif: PID Controller
 * @author Bhargavi
 * @version 1.0
 * @copyright UMD
 */

#include <pidcont.hpp>
pidcont::pidcont() {
}
pidcont::~pidcont() {
}

/**
 * @brief This function is to compute the actual velocity after 1 second
 * @author: Shaotu Jia
 * @param targetvelo This is the target velocity
 * @param actualvelo This is the actual velocity at current time
 * @param Kp_input This is the gain for porportional term
 * @param Ki_input This is the gain for integration term
 * @param Kd_input This is the gain for differential term
 */
double pidcont::computenew_velo(double targetvelo, double actualvelo, \
                                double Kp_input, double Ki_input, \
                                double Kd_input) {
    double error_current = 0;
    double error_integral = 0;
    double error_last = error_current;
    double error_diff = 0;
    double actual = actualvelo;

    for (int i = 0; i <= 1/time; i++) {
        error_current = targetvelo-actual;
        error_integral += (error_current - error_last)*time;
        error_diff = error_current - error_last;
        double change = Kp_input*error_current + Ki_input*error_integral\
            + Kd_input*error_diff;
        actual += change;
        error_last = error_current;
    }
    return actual;
}
