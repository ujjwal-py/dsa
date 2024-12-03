#include <bits/stdc++.h>
using namespace std;

long long fact(long long n) {
    if (n == 1) return 1;
    return n * fact(n-1);
}

vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        if (n < 1) return result;
        return result.push_back(fact(n-1));
    }

int main() {

    factorialNumbers(3);
    
    return 0;
}