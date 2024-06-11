#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];

	cout << "Sife of the array: " << sizeof(arr) / sizeof(int) << endl;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	cout << "Elements are: ";
	for(int i=0; i<=n-1; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;

	return 0;
}
