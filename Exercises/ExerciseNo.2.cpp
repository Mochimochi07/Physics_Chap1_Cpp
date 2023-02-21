//The density of water is 1.00g/cm^3. What is this value in kilograms per cubic meter?

#include <iostream>
using namespace std;

int main() {

  double num_centi = 1;
  double num_kilo ;
 
  
  num_kilo = num_centi / 1000 ;
  
  cout << num_kilo << "\n";
  
  cout << "the value in kilograms per cubic meter is " << num_kilo <<" kg/cm^3"; 
  return 0;
}
