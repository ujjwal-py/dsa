#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-2,1};
    int n = nums.size();
    int sum = *max_element(nums.begin(), nums.end());
    for (int i = 0; i<nums.size() - 1; i++) {
        int insum = nums[i];
        for (int j = i + 1; j < nums.size(); j++) {
            insum = insum + nums[j];
            sum = max(insum, sum);
        }
    }
    cout << sum << endl;

}