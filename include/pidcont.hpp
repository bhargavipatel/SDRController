/**
 * @breif: PID Controller
 * @author Bhargavi
 * @version 1.0
 */

#ifndef pidcont_HPP_
#define pidcont_HPP_

#include <iostream>
#include <cmath>

class pidcont {
 private:
     double Kp = 0.5;
     double Ki = 0.05;
     double Kd = 1;
     float perr = 0;
     float err = 0;	
    
 public:
	double time=0.0001;
	pidcont();
	pidcont(double kp,double ki,double kd);
	~pidcont();
	
	double computenew_velo(double target,double actualvelo,double kp,double ki,double kd);
   
};



#endif /*pidcont_HPP_ */
