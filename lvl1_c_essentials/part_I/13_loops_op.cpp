#include <iostream>

using namespace std;

int main() {

    // While Loop
    int cal = 0;
    while (cal < 5){
        cout << "Burning " << (cal + 1) << endl;
        cal = cal + 1;
    }

    cout << "Out of loop with " << cal << " cals" << endl;;


    // Take input N, followed by N inputs and find their sum
    int N;
    cin >> N;

    int i = 1;
    int sum = 0;
    int no;

    while (i <= N) {
        cin >> no;
        sum = sum + no;

        i++;
    }

    cout << "Sum of the numbers: " << sum << endl;

    return 0;
}
