#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    
    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        else if (key < arr[mid] ) {
            end = mid;
        }
        else if (key > mid) {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main() {
    int arr[9] = {1, 3, 5, 6, 8, 9 ,11, 16, 17};
    int arr_2[9] = {3, 5, 7, 8, 9, 434, 567, 789, 999};
    int size = 9;
    int key;
    cin >> key;
    cout << "Element found at " << BinarySearch(arr_2, size, key);
}