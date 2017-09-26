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
double pidcont::computenew_velo(double targetvelo, double actuvelo, double Kp_input, double Ki_input, double Kd_input) {
  //double someconst = 3.1;
  //return someconst;
  targetvelo = 10;
  actuvelo = 2;
  double error1 = targetvelo-actuvelo;
  return(Kp_input*error1 + Kd_input*error1 + Ki_input*error1);
  //-2.325
}



