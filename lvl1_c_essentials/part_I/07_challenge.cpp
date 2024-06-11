#include <iostream>
#include <iomanip> // precision
using namespace std;

int main() {
    // Find average of 5 integers and print 
    // the output up to 4 decimal places
    
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;
    
    int sum = a + b + c + d + e;

    cout << (float)sum / 3 << endl;
    cout << fixed << setprecision(4) << (float)sum / 3 << endl;

    return 0;
}
