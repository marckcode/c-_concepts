#include<iostream>
using namespace std;

void watchVideo(int *viewsPtr) {
	// watch video increment counts in 1.
	*viewsPtr = *viewsPtr + 1;
}

int main() {
	int views = 100;

	watchVideo(&views);

	cout << views << endl;
	
	return 0;
}
