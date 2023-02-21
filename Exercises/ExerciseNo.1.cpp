//How many nanoseconds does it take light to travel 1.00m in a vacuum?

#include <iostream>
using namespace std;

int main() {

  double spdoflight = 299792458;
  double s = 1;
  double time;
  
  time = s / spdoflight ;
  
  cout << time;
  return 0;
}

