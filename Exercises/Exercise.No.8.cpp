//A physics professor drives 4.25 km south, then 2.75km west, then 1.50km north. Find the magnitude and the direction of the resultant displacement.



#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double south = -4.25; 
    double west = -2.75; 
    double north = 1.50; 
    
    double x = west;
    double y = north + south;
    
    double magnitude = sqrt(x*x + y*y);
    double direction = atan2(y, x) * 180 / M_PI;
    
   
    cout << "The magnitude of the resultant displacement is " << magnitude << " km." << endl;
    cout << "The direction of the resultant displacement is " << direction << " degrees west of north." << endl;
    
    return 0;
}
