#include <iostream>
using namespace std;

void rotate(int arr[], int d, int n) {
	int temp[d];
	for (int i = 0; i < d; i++) {
		temp[i] = arr[i];
	}
	for (int i = d; i<n; i++) {
		arr[i-d] = arr[i];
	}
	for (int i = n-d; i < n; i++) {
		arr[i] = temp[i - (n - d)];
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 6, 7, 8};
	int size = sizeof(arr)/sizeof(int);
	int d;
	cout << "Enter - ";
	cin >> d;
	rotate(arr, d, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}