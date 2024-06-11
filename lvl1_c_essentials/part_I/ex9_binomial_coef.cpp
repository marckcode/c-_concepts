// Find Computer Binomial Coefficient NCR, given N & R.
// Example:
// In how many ways we can pick 2 cards out of the 5 cards given:
// [A, B, C, D, E]
// Formula: (N!) / ((N-R)!R!)

#include<iostream>

using namespace std;

int factorial(int n) {
    int ans = 1;
    for (int i=1; i<=n; i++) {
        ans = ans * i;
    }

    return ans;
}

int binomialCoeff(int N, int R) {
    int ans = factorial(N) / (factorial(N-R) * factorial(R));

    return ans;
}

int main() {
    int N, R;
    
    // Choose R objects out of a set of N objects.
    cin >> N >> R;

    cout << "NCR = " << binomialCoeff(N, R) << endl;

    return 0;
}
