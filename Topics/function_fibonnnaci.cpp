#include <iostream>
using namespace std;

void fib(int n) {
    int first_num = 0, second_num = 1;
    cout << "Fibonnaci Series: " << first_num << " " << second_num << " ";
    for (int i=1; i<=n; i++) {
        int sum = first_num + second_num;
        first_num = second_num;
        second_num = sum;
        cout << sum << " ";
    }
}

int main() {
    int n, result;
    cout << "Enter the range: ";
    cin >> n;
    fib(n);
}