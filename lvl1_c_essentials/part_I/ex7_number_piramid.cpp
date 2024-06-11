/*
Given N, print a pattern of the following form:
N = 3
    1
   232
  34543
 4567654
*/

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // rows
    for(int i=1; i<=n; i++) {
        // spaces
        for(int cnt=1; cnt<=n-i; cnt++) {
            cout << " ";
        }

        // increasing numbers
        int val = i;
        for(int cnt=1; cnt<=i; cnt++) {
            cout << val;
            val++;
        }
        // here val ends at 6

        // decreasing numbers
        val = val - 2;
        for(int cnt=1; cnt<=i-1; cnt++) {
            cout << val;
            val--;
        }

        // new line 
        cout << endl;
    }


    return 0;
}

