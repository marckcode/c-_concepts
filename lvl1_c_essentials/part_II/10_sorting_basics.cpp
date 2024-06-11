#include<iostream>
#include<algorithm>

using namespace std;

void print(int *myArray, int n) {
	for(int i=0; i<n;i++) {
		cout << myArray[i] << ", ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	int arr[n];

	for(int i=0; i<=n-1; i++) {
		cin >> arr[i];
	}
	
	// Sort (start, end+1)
	// Sort + with greater element at the front
	sort(arr, arr + n, greater<int>()); //  NLogN Time

	// print
	print(arr, n);

	return 0;
}
