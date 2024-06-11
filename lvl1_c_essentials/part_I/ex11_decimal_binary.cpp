// Given a integer N, write a function to find its
// binary representation.

#include <iostream>

using namespace std;

int decimal2Binary(int N) {
    int p = 1;
    int ans = 0;
    int rem;

    while (N > 0) {
        rem = N % 2; 
        ans = ans + p*rem;
        N = N / 2;
        p = p * 10;
    }

    return ans;
}


int main() {
    int N;
    cin >> N;

    cout << decimal2Binary(N) << endl;
    

    return 0;
}


