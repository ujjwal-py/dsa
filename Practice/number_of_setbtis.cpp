#include <iostream> 
using namespace std;

int SetBits(int n) {
    int count= 0, bit;
    while (n!=0) {
        bit = n&1;
        if (bit==1) {
            count ++;
        }
        n >>=1;
    }
    return count;
}

int main() {
    int  a, b;
    cin >> a >> b;
    int sum = SetBits(a) + SetBits(b);
    cout << "Sum of Set Bits: " << sum;
}
