#include<iostream>

using namespace std;

// A pointer is a variable that holds the address of another variable.

int main() {
    int x = 10;
    float y = 13.51;

    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << &y << endl;

    int *xptr = &x;

    cout << "Address of x through a pointer: " << xptr << endl;
    cout << "Address of the pointer: " << &xptr << endl;

    // pointer to a pointer
    int **xxptr = &xptr;

    cout << "Pointer to a pointer: " << xxptr << endl;

    return 0;
}
