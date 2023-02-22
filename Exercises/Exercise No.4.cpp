//The volume of a liquid in a softdrink can is given as 0.355liters(L). Using the Conversions 1L= 1000cm3 and 1in=2.54cm, express this volume in cubic inches

#include <iostream>
using namespace std;

int main() {
  double volume_liters = 0.355; 
  double volume_cm3 = volume_liters * 1000; 
  double volume_cubic_inches = volume_cm3 / pow(2.54, 3); 
  cout << "The volume of the soft drink can is " << volume_cubic_inches << " cubic inches." << endl;
  return 0;
}
