#include<iostream>

using namespace std;

void print(int *myArray, int n) {
	for(int i=0; i<n; i++) {
		cout << myArray[i] << " ";
	}

	cout << endl;
}

void ReverseArray(int *arr, int n) {
	
	for(int i=n-1; i>=0; i--) {
		cout << arr[i] << ", ";
	}
	cout << endl;
	for (int i=0; i<n; i++) {
		cout << arr[n-1-i] << ", ";
	}
	cout << endl;
}

void ReverseArrayInPlace(int *arr, int n) {
	int s = 0;
	int e = n - 1;

	while (s < e) {
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	int arr[n];

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	ReverseArrayInPlace(arr, n);
	print(arr, n);

	return 0;
}
