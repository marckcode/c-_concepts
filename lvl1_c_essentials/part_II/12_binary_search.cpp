#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
	int s = 0;
	int e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if(arr[mid] == key) {
			return mid;
		}
		else if(arr[mid] > key) {
			e = mid - 1;
		}
		else {
			e = mid + 1;
		}
	}

	return -1;
}


int main() {
	cout << "Binary Search Problem: " << endl;

	int arr[] = {10,15,20,25,30,34};
	int n = sizeof(arr) / sizeof(int);

	cout << "The size of the array is: " << n << endl;

	int key;
	cin >> key;

	int index = binary_search(arr, n, key);

	if(index != -1) {
		cout << key << " is present at index " << index << endl;
	}
	else {
		cout << key << " is NOT FOUND!!" << endl;
	}

	return 0;
}
