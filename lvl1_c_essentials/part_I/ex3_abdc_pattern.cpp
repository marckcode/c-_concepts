/*
Given N, print the following pattern:
N = 5
ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        char letter = 'A';
        //letters n-i+1 in increasing order of values
        for(int cnt=1; cnt<=n-i+1; cnt++) {
            cout << letter;
            letter++;
        }
        
        //letters n-i+1 in decreasing order of values
        letter = letter - 1; // reset the value to previous printed value
        for(int cnt=1; cnt<=n-i+1; cnt++) {
            cout << letter;
            letter--;
        }
        // new line
        cout << endl;
    }


    return 0;
}
