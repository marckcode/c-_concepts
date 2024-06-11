// Given a number N, check if it is prime
// Logic: find at least 1 divisor in the range of 2 and N-1
#include<iostream>

using namespace std;

int main() {
    int N, i;
    cin >> N;

    for (i=2; i<=N-1; i++) {
        if(N % i == 0){
            cout << N << " is not Prime!" << endl;
            break;
        }
    }

    cout << "Value of i: " << i << endl;
    
    // Prime
    if (i == N) {
        cout << N << " is Prime!" << endl;
    }

    return 0;
}
