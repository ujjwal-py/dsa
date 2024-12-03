#include <iostream>
using namespace std;

int main() {
    int a[10] = {42, 17, 23, 8, 91, 56, 34, 77, 29, 65};
    int item;
    cin >> item;

    for(int i = 0; i < 10; i++) {
        if (a[i] == item) {
            cout << "Found at position " << i+1 << endl; 
        }
        else {
            cout << "Not found" << endl;
        }
   }
   
    return 0;
}