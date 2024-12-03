#include <bits/stdc++.h>
using namespace std; 

void selection_sort(int arr[],int n) {
    int min;
    cout << "Doing Selection Sorting - " << endl;
    for (int i = 0; i < n-1; i++) {
        min = i;
        for (int j = i + 1; j<n; j++) {
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
void bubble_sort(int arr[],int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1 -i; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }

}
void insertionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
void input_arr(int arr[], int n) {
    cout << "Enter the Array Elements - " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void output_arr(int arr[], int n) {
    cout << "Sorted Array: "<< endl;
    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    int arr[100] = {2, 5, 3, 2, 6, 2, 9, 1};
    n = 8;
    // cout << "Enter the number of elements of array you wanna sort - " << endl;
    // cin >> n; 
    // input_arr(arr, n);
    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertionSort(arr, n);
    output_arr(arr, n);

    
}