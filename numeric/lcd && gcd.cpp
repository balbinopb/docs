#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int a = 36, b = 60;

    // Calculate GCD and LCM
    int gcd_val = gcd(a, b);
    int lcm_val = lcm(a, b);

    cout<< "GCD of " << a << " and " << b << " is: " << gcd_val << endl;
    cout<< "LCM of " << a << " and " << b << " is: " << lcm_val << endl;

    return 0;
}
