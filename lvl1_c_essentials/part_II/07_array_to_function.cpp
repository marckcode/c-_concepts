#include<iostream>

using namespace std;

// Pass by reference here!
void printArray(int *arr, int n) {
	
	cout << "In Function: " << sizeof(arr) << endl;
	arr[0] = 100;
	for (int i=0; i<=n-1; i++) {
		cout << arr[i] << ",";
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};

	int n = sizeof(arr) / sizeof(int);
	
	printArray(arr, n);
	

	cout << "\nIn Main: " << sizeof(arr) << endl;
	for (int i=0; i<n;i++) {
		cout << arr[i] << ",";
	}

	return 0;
}
