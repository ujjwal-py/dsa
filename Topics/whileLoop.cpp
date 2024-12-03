#include <iostream>
using namespace std;

int main() {
    // int n;
    // int i=1;
    // cout << "Enter the Range for Loop:" << endl;
    // cin >> n;
    // while (i <= n) {
    //     cout << i << endl;
    //     i++;
    // }

    int n; 
    int sum = 0;
    int i=1;
    cout << "Enter the Range for Sum: " << endl;
    cin >> n;
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    cout << "Sum = " << sum;


}