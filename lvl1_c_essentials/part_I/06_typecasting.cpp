#include <iostream>

using namespace std;

int main() {
    // typecasting -> change of resulting data type
    cout << 5/4 << endl; // result in INT

    // IMPLICIT TYPECASTING
    //(float + int) 
    cout << 5/3.0 << endl; // result in FLOAT
    cout << 5.0/3 << endl; // result in FLOAT
    
    // char + int
    char letter = 'A';
    cout << letter << endl;
    cout << letter + 1 << endl;
    letter = letter + 1;
    cout << letter << endl;

    char ch = 67;
    cout << ch << endl; // printed as character

    // boolean + int
    cout << (true + 5) << endl;
    cout << (false + 5) << endl;

    // EXPLICIT TYPECASTING
    int x = 5;
    cout << (float)x/3 << endl;

    char l = 'B';
    cout << l + 1 << endl;
    cout << (char)(l + 1) << endl;

    cout << (bool)5 + 1 << endl;

    return 0;
}


