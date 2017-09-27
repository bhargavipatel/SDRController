/**
 * @breif: Main
 * @author Bhargavi
 * @version 1.0
 * @Copyright UMD
 */
#include "pidcont.hpp"
#include <iostream>
/**
 * @brief      Main Function
 *
 * @return
 */
int main() {
  pidcont obj1;
  std::cout << "Calculated velocity\n"
    << obj1.computenew_velo(5, 6.5, 0.5, 0.05, 0.01)
    << std::endl;
  return 0;
}
