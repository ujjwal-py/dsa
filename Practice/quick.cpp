#include <iostream>
using namespace std;

int largest(int arr[]) {
	int n = sizeof(arr)/sizeof(int);
	for (int i = 0; i <=n-2; i++){
		if (arr[i] > arr[i+1]) {
			swap(arr[i], arr[i+1]);
		}
	}
	return arr[n-1];
}
int main() {
	int arr[10] = {23, 4, 23,4 6, 7, 3, 2,1, 0};
	int asn = largest(arr);
	cout << asn << endl;
}