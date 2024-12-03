#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, digit, t;
    int rev = 0;
    cout << "Enter a Number to check:" << endl;
    cin >> n;
    
    t = n;

    while (n != 0) {
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    } 
    cout << rev << endl;
    if (rev == t) {
        cout << t << " is a Palindrome Number." << endl;
    }
    else {
        cout << t << " is not a Palindrome.";
    }
}