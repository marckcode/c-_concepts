#include<iostream>

using namespace std;

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	// # subarrays = n(n-1)/2
	// # subarrays = C^N_2 = n(n-1)/2 (Combinatorial)
	int n = sizeof(arr) / sizeof(int);

	for(int i=0; i<n; i++) { // i= 0 1 2 3 4
		for(int j=i; j<n; j++) { // j = 0 1 2 3 4 | 1 2 3 4 | 2 3 4 | 3 4
			//cout << "i " << i << " - j " << j << endl;
			for(int k=i; k<=j; k++) { // 0 | 
				cout << arr[k] << ", ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
