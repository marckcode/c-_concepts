#include <iostream>

using namespace std;

int main() {
    // OPERATORS
    // Binary AND &
    // Binary OR | 
    // Binary XOR ^
    // Binary One's Complement ~
    // Binary Left Shift <<
    // Binary Right Shift >>
    
    cout << "AND operator: " << endl;
    int y = 5;
    int z = 7;
    cout << (y & z) << endl;

    cout << "OR operator: " << endl;
    int n = 5;
    int m = 8;
    cout << (n | m) << endl;
    
    cout << "XOR operator: " << endl;
    int a = 5;
    int b = 7;
    cout << (a ^ b) << endl;

    cout << "NOT operator: " << endl;
    int x = 0;
    cout << (~x) << endl;

    cout << "Left Shift: << " << endl;
    cout << (5 << 2) << endl;
    cout << (4 << 5) << endl;

    cout << "Right Shift: >> " << endl;
    cout << (10 >> 1) << endl;
    cout << (10 >> 4) << endl;

    return 0;
}
