#include<iostream>

using namespace std;

int main() {
	int arr[4] = {11, 12, 13, 14};

	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	
	int n = sizeof(arr) / sizeof(int);
	cout << "Sife of the array: " << n << endl;
	
	cout << "Elements: ";
	for(int i=0; i<=n-1; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;

	return 0;
}
