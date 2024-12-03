#include <iostream>
using namespace std;

int main() {
    int range, First_Num=0, Second_num=1, Next_num, i;

    cout << "Enter the range for series: ";
    cin >> range;

    cout << "Fibbonaci Series: " << First_Num << " " << Second_num << " ";

    for (i=1; i <= range; i++) {
        Next_num = First_Num + Second_num;
        First_Num = Second_num;
        Second_num = Next_num;
        cout << Next_num << " ";
    }


}