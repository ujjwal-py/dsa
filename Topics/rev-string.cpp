#include <iostream>
using namespace std;
int count_len(char name[]) {
    int count = 0;
    
    for(int i = 0; name[i]!='\0'; i++) {
            count++;
        }
    
    return count;
}
void reverse(char name[], int n) {
    int start = 0;
    int end = n-1;
    while (start < end) {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }


}
int main() {
    char name[50] = "abcde";
    int n = count_len(name);
    reverse(name, n);
    cout << name << endl;

    

}