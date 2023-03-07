//estimate thhe percentage error in measuring
// a) a distance of about 65cm with a meter stick; 
//b) a mass of about 16g with a chemical balance;
// c) a time interval of a bout 4 min with a stopwatch.

#include <iostream>

using namespace std;

int main() {
    double distance= 0.65; 
    double precision_distance = 0.001; 
    double mass = 0.016; 
    double precision_mass = 0.000001;
    double time_interval = 240; 
    double precision_time = 0.1; 


    double percentage_error_distance = (precision_distance / distance) * 100;
    cout << "Percentage error in measuring the distance: " << percentage_error_distance << "%" << endl;
 
    double percentage_error_mass = (precision_mass / mass) * 100;
    cout << "Percentage error in measuring the mass: " << percentage_error_mass << "%" << endl;

    double percentage_error_time = (precision_time / time_interval) * 100;
    cout << "Percentage error in measuring the time interval: " << percentage_error_time << "%" << endl;

    return 0;
}
