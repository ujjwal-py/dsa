#include <bits/stdc++.h>
using namespace std; 

int main() {
    vector<int> v; 
    v.push_back(3);
    v.push_back(4);

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
}