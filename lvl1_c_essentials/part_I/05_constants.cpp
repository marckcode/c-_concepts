#include<iostream>

using namespace std;

# define RAD 5 // Macro
// replacement text for word 'RAD', not a bucket in memory
# define ll long long // Macro for a data type

int main () {
    const float pi = 3.14; // Read-only bucket, cannot be changed
    ll bigNo = 123456;


    cout << "Radius square: " << RAD * RAD << endl;
    cout << "Value of pi: " << pi << endl;

    cout << "Area of circunference: " << pi * RAD * RAD << endl;
    cout << "Macro for data type long: " << bigNo << endl;

    return 0;
}
