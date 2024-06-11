#include<iostream>

using namespace std;

// Order elements in increasing order
void bubble_sort(int a[], int n) {
	for(int i=1; i<=n-1; i++) {
		for(int j=0; j<=n-i-1; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main() {
	int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
	int n = sizeof(arr) / sizeof(int);
	
	bubble_sort(arr, n);
	for(auto x: arr) {
		cout << x << ", ";
	}

	return 0;
}
