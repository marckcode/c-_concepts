#include <iostream>
#include <ostream>

using namespace std;

int main() {
    int x;

    cout << sizeof(x) << endl;
    cout << "Size of Int: " << sizeof(int) << endl;
    cout << "Size of Char: " << sizeof(char) << endl;   // 1 byte
    cout << "Size of Bool: " << sizeof(bool) << endl;   // 1 byte
    cout << "Size of Float: " << sizeof(float) << endl; // 4 bytes
    cout << "Size of double: " << sizeof(double) << endl; // 8 bytes
    
    short int age;
    long int age1;
    long long int age2;

    cout << "Size of Short Int: " << sizeof(age) << endl; // 2 bytes
    cout << "Size of Long Int: " << sizeof(age1) << endl;  // 8 bytes
    cout << "Size of Long Long Int: " << sizeof(age2) << endl; // 8 bytes


    // MSB -> Most significant Bit (Sign Bit) - first bit of the bucket
    
    char bucket = 'A';
    cout << "My bucket: " << bucket << endl;

    int buckt = bucket;
    cout << "My int bucket: " << buckt << endl;
    
    bool val = 4; // non-zero is treated as true
    cout << "My bool val: " << val << endl;

    return 0;
}
