#include <iostream> 
using namespace std;

int main() {

//     int a = 4, b = 5, c;

//     cout << "a&b " << (a&b) << endl;

//     cout << (40 >> 2) << endl;
//     cout << (17 >> 3) << endl;
//     cout << (40 << 2) << endl;
//     cout << (17 << 3) << endl;

    // int a = 4, i = 0;  
    // cout << (a + (i++)) << endl;    // a = 4, i = 1 after this statemend gets executed
    // cout << i << endl;

	int a = 4, i = 0;  
	cout << (a + (++i)) << endl;    // a = 5
	cout << i << endl; // prints 1
}