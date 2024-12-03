#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
    {
        vector<int> temp;
        int left = l;
        int right = m + 1;
        while(left <= m && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(left);
                left++;
            }
            else {
                temp.push_back(right);
                right++;
            }
        }
        while (left <= m) {
            temp.push_back(left);
        }
        while(right <= r) {
            temp.push_back(right);
        }
        for (int i = l; i <= r; i++){
            arr[i] = temp[i-l];
        }
    }
void mergeSort(int arr[], int l, int r)
{
    if (l >= r) return;
    int m = (l + r)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
		int arr[10];
		int n = 10;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		// insertion_sort(arr, n);
		mergeSort(arr, 0, 9);
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		return 0;
}



