// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long n) {
        if (n == 0) return 1;
        return pow(n,3) + pow(sumOfSeries(n-1),3);
}

int main() {
    // Write C++ code here
    int ans = sumOfSeries(5);
    cout << ans;
}