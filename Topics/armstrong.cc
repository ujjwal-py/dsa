#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n, t, rem, arm = 0, count = 0;

    cout << "Enter the Number to Check" << endl;
    cin >> n;

    t = n;
    while (t > 0) {
        t = t/10;
        count ++;
    }

    t = n;
    while (t > 0) {
        rem = t%10;
        arm = arm + pow(rem, count);
        t = t/10;
    }

    if (arm == n) {
        cout << n << " is an Armstrong Number";
    }
    else {
        cout << n << " is not an Armstrong Number";
    }
}   