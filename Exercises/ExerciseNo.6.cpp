#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi_appr_a = 22.0 / 7.0;
    double pi_appr_b = 355.0 / 113.0;
    double pi_act = 3.14159265359;

    double percent_error_a = abs((pi_appr_a - pi_act) / pi_act) * 100;
    double percent_error_b = abs((pi_appr_b - pi_act) / pi_act) * 100;

    cout << "Percent error in approximation a: " << percent_error_a << "%" << endl;
    cout << "Percent error in approximation b: " << percent_error_b << "%" << endl;

    return 0;
}
