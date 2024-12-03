#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k) {
	int n = nums.size();
	int last;
	for (int i = 1; i <= k; i++) {
		last = nums[n-1];
		for (int j = 0; j < n-1; j++) {
			nums[n-j-1] = nums[n-j-2];
		}
		nums[0] = last;
	}
}

int main() {
	vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
	rotate(nums, 4);
	for (int i : nums) {
		cout << i << " ";
	}
}