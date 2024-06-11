#include<iostream>

using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Invalid Input";
        return -1;
    }

    int ans = 1;
    for (int i=1; i<=n; i++) {
        ans = ans * i;
    }

    return ans;
}


int main() {
    int n;
    long int f;

    cout << "Introduce a number: ";
    cin >> n;

    f = factorial(n);
    
    cout << "Result: " << f << endl;
}
