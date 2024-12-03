#include <iostream>
using namespace std; 

// void fn() {
//     cout << "Let it Happen" << endl;
//     fn();
// }

int counting() {
    int count = 0;
    if (count == 100) {
        return count;
    }
    else {
        cout << count << endl;
        count++;
        counting();
    }
}
int main() {
    counting();    
}