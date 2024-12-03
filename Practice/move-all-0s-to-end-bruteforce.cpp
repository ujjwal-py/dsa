#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &arr, int n ) {
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[i] = temp[i];
    }
    for (int i = temp.size(); i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    vector<int> arr = {1, 0, 4, 5, 0, 0, 6, 7, 0};
    int n = arr.size();
    moveZeros(arr, n);
    for (int i = 0; i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}