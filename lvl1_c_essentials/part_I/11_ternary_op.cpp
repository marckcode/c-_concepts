#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    // Shorthand for if else statements
    x % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
   
    // Another example
    string weather = x > 20 ? "Hot": "Cool";

    cout << weather << endl;

    return 0;
}
