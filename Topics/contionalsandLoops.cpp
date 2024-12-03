#include <iostream>
using namespace std;

int main() {
    /*
    int a,b;
    cout << "Enter the Value for A:" << endl;
    cin >> a;
    cout << "Enter the Value for B:" << endl;
    cin >> b;

    if (a>b) {
        cout << "A is Greater than B" << endl;
    }
    else if (b>a) {
        cout << "B is Greater than A" << endl;
    }
    else {
    cout << "Please Enter a Valid Number!" << endl;
    }
    */

   char ch;
   cout << "Enter a Char"  << endl;
   cin >> ch;
   if (ch >= 97){
    cout << "ch is Lowercase Letter " << ch << endl; 
   }
   else if (ch >= 65 && ch <=90) {
    cout << "ch is Uppercase Letter " << ch << endl;
   }
   else {
    cout << "ch is an Integer " << ch << endl;
   }
}