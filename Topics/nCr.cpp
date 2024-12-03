#include <iostream>
using namespace std;

int fact(int a) {
    int fact = 1;
    for (int i=1; i<=a; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int numerator, denominator,ans;
    numerator = fact(n);
    denominator = fact(r) * fact(n-r);
    ans = numerator/denominator;
    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;
    int result = nCr(n,r);
    cout << result; 
}