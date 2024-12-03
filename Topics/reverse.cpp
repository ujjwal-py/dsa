#include <iostream>
using namespace std;

int main() {
    int a[10] = {42, 17, 23, 8, 91, 56, 34, 77, 29, 65};
    int start = 0;
    int end = 10-1;

    while(start <= end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}