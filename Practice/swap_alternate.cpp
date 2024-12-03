#include <iostream>
using namespace std;

int main() {
    int a[10] = {42, 17, 23, 8, 91, 56, 34, 77, 29, 65};
    int i = 0;
    while (i < 10) { 
        swap(a[i], a[i+1]);
        i = i+2;
    }

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

}
