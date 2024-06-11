// Given a integer N which having binary digits - 0s and 1s,
// interpret the decimal equivalent of this number.

#include<iostream>
#include <ostream>

using namespace std;

int binary2Decimal(int N) {
    int p = 1;
    int ans = 0;
    int last_digit;

    while (N != 0) {
        last_digit = N % 10;
        ans = ans + last_digit * p;
        p = p * 2;
        N = N / 10;
    }

    return ans;
}


int main() {

    int N;
    cin >> N;

    cout << binary2Decimal(N) << endl;

    return 0;
}
