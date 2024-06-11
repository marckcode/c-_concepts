#include <iostream>

using namespace std;

int main() {
    // Given a number N, find the sum of its digits
    int N;
    int sum = 0;
    cin >>  N;
    
    /*
    while (N != 0) {
        int last_digit = N % 10;
        sum = sum + last_digit;
        N = N / 10;
    }
    */
    for( ; N != 0; N=N/10){
        //int last_digit = N % 10;
        sum = sum + (N % 10);
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
