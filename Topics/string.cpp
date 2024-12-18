#include <iostream>
using namespace std;
int count_len(char name[]) {
    int count = 0;
    
    for(int i = 0; name[i]!='\0'; i++) {
            count++;
        }
    
    return count;

}
int main() {
    char name[50] = "Ujjwal kumar";
    int len = count_len(name);
    cout << len << endl;
    
}