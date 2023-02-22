//The concorde is the fastest airliner used for commercial service. 
//It can cruise at 1450mi/h (about two times the speed of sound, or in othere words, Mach 2).
//a)What is the cruise speed of the concorde in mi/s? 
//b)What is it in m/s?

#include <iostream>
using namespace std;

int main() {
    double speed_mph = 1450;
    double speed_mps = speed_mph * 0.44704; 

    
    cout << "Cruise speed of Concorde:" << endl;
    cout << "- " << speed_mph / 3600 << " mi/s" << endl;
    cout << "- " << speed_mps << " m/s" << endl;

    return 0;
}
