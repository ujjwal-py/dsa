#include <iostream> 
using namespace std; 

void initArray(int arr[], int size) {
    cout << "Enter array Elements:" << endl;
    for (int i =0; i < size; i++) {
        cin >> arr[i];
    }
}

int getMin(int arr[], int size) {
    int mini = INT_MAX;
    for (int i=0; i < size; i++) {
    //     if (arr[i] < mini) {
    //         mini = arr[i];
    //     }
            mini = min(arr[i], mini);
    }
    return mini;
}

int getMax(int arr[], int size) {
    int maxi = INT_MIN;
    for (int i=0; i < size; i++) {
        // if (arr[i] > maxi) {
        //     maxi = arr[i];
        // }
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int main() {
    int size; 
    int arr[500];
    cout << "Enter the size for array:" << endl;
    cin >> size; 
    initArray(arr, size);
    int maximum = getMax(arr, size);
    int minimum = getMin(arr, size);
    cout << "Maximum number is " << maximum << endl;
    cout << "Minimum number is " << minimum << endl;
}