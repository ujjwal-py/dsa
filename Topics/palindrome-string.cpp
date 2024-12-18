#include <iostream>
using namespace std;
int count_len(char name[]) {
    int count = 0;
    
    for(int i = 0; name[i]!='\0'; i++) {
            count++;
        }
    
    return count;
}
bool palindrome(char name[], int n) {
    bool ispalin = true;
    int start = 0;
    int end = n-1;
    while (start < end) {
        if (name[start] != name[end]){
            ispalin = false;
            break;
        }
        start++;
        end--;
    }
    return ispalin;
}
int main() {
    char name[50];
    cin >> name;
    int n = count_len(name);
    if (palindrome(name, n)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a palindrome" << endl;
    }

}