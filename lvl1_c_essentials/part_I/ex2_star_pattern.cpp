/*
N = 3
    *      -> 1
   ***     -> 3
  *****    -> 5
*/

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        // spaces
        for (int stars=1; stars<=n-i; stars++) {
            cout << " ";
        }

        // stars
        for (int stars=1; stars<=2*i-1; stars++) {
            cout << "*";
        }

        cout << "\n";
    }


    return 0;
}
