//starting with the definition . 1in.=2.54cm, find the number of miles in 1.00km.


#include <iostream>
using namespace std;

int main() {
    const double CM_PER_INCH = 2.54; 
    const double INCHES_PER_MILE = 63360; 
    const double KM_PER_MILE = 1.60934; 

    double km = 1.00; // The number of km to convert to miles

    double cm = km / KM_PER_MILE * 100 * CM_PER_INCH; 
    double inches = cm / CM_PER_INCH; 
    double miles = inches / INCHES_PER_MILE; 

    cout << "1.00 km is equal to " << miles << " miles." << endl;

    return 0;
}
