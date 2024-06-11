#include<iostream>

using namespace std;

int main(){
    // UNITS     | CHARGES
    //   1 - 100 | Free
    // 100 - 200 | Rs 5/unit
    // 200 - 300 | Rs 10/unit
    //    300+   | Rs 12/unit
    
    int units;
    cout << "Enter number of units: ";
    cin >> units;

    int cost;

    if (units <= 100) {
        cost = 0;
    }
    else if (units <= 200) {
        cost = 0 + (units - 100) * 5;
    }
    else if (units <= 300) {
        cost = 0 + 100 * 5 + (units - 200) * 10;
    }
    else {
        cost = 0 + 100 * 5 + 200 * 10 + (units - 300) * 12;
    }

    cout << "Total electricity bill to pay: " << cost << " Rs" << endl;

        
    return 0;
}
