#include<iostream>

using namespace std;

int main() {
    // data
    int physics, chem, math;
    cout << "Enter the marks for Physics, Chemistry and Math: ";
    cin >> physics;
    cin >> chem;
    cin >> math;
    
    // processing
    float avg = (physics + chem + math) / 3.0; // typecasting

    // final result
    cout << "Average marks: " << avg << endl;

    return 0;
}

