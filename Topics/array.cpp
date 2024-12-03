#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing Array...." << endl;
    for (int i = 1; i <=size; i++) {
        cout << arr[i] << " ";
    }
    cout << "Printing done!" << endl;
}

void initArray(int arr[], int size) {
    cout << "Enter array Elements:" << endl;
    for (int i =1; i <= size; i++) {
        cin >> arr[i];
    }
}

int main(){

    int a[50];
    int n;
    cout << "Enter the number of elements you want in your array:" << endl;
    cin >> n;

    initArray(a, n);
    
    printArray(a, n);

   int b[5] = {2,3,4,52,1};
//    cout << "First element of this array: " << a[0];
   printArray(b,5);

}