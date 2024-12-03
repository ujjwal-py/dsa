#include <iostream> 
using namespace std;

int main() {
    float a, b, result;
    char op;

    cout << "Enter the first Number - ";
    cin >> a;
    cout << "Enter the Second Number - ";
    cin >> b;
    cout << "Enter the operator from [+ , - , * , /]" << endl;
    cin >> op;

    switch(op) {
        case '+': result = a + b;
                  cout << result;
                  break;
        case '-': result = a-b;
                  cout << result;
                  break;
        case '*': result = a*b;
                  cout << result;
                  break;
        case '/': result = a/b;
                 cout << result;
                 break;
        default: cout << "Enter a vaid operator!";
                 break;

    }
}