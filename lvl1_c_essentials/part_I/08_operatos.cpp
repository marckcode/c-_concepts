#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << "Logical Operators" << endl;
    int money = 15;
    int phone = 12;
    bool sale = true;

    cout << ((1 > 0) && (4 > 13)) << endl;
    cout << ((4 >= 6) || (4 != 5)) << endl;

    if(!(money > phone && sale)){
        cout << "Let's buy a phone!" << endl;
    }
    else{
        cout << "Let's wait!" << endl;
    }


    cout << "Relational Operators: " << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "b >= a: " << (b >= a) << endl;
    

    // Increment and decrement operators
    cout << "Increment and Decrement Operators:" << endl;
    //a++; // a = a + 1;
    //b--; // b = b - 1;
    ++a; // 
    --b;
    cout << a << endl;
    cout << b << endl;
    
    // Change in behaviour when used along with Assignment Operators
    cout << "Post increment example: " << endl;
    int x = 10;
    int y = x++; // First assign, then increment (y = 10, x = 11)
    cout << "Val of x: " << x << " | Val of y: " << y << endl;

    cout << "Pre increment example: " << endl;
    int z = ++x;
    cout << "Val of z: " << z << " | Val of x: " << x << endl;

    
    // Compound assignment operators
    cout << "Compound Assignment Operators: " << endl;
    a += 7;
    cout << a << endl;
    a -= 2;
    cout << a << endl;
    a *= 2;
    cout << a << endl;
    a %= 5;
    cout << a << endl;


    // Arithmetic operators
    cout << "Arithmetic Operators: " << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << "A " << a << endl;
    cout << "B " << b << endl;

    return 0;
}
