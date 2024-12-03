#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
    int dropCount = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            dropCount++;
        }
        // If there are more than 1 drop, return false
        if (dropCount > 1) {
            return false;
        }
    }
    
    return true; // 0 or 1 drop found, valid rotation
}
int main() {
	vector<int> arr = {3, 4, 5, 1, 2, 6, 8};
	if (check(arr)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
