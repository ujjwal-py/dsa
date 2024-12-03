#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 1, 9};
    int n = arr.size();
    int k =  10;
    int length = 0;

    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = i; j < n; j++) {
            s = s + arr[j];
            if (s == k) length = max(length, j-i+1);
        }

    }
    cout << length << endl;
}