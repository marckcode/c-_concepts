#include<iostream>
#include<iomanip> // function for precision

using namespace std;

int main() {
    bool x = true;
    bool isWeatherRainy = false;

    cout << x << endl;
    cout << isWeatherRainy << endl;
    
    int y = 5128;
    float pi = 3.142899987;
    double pi_d = 3.142899987; // more precise

    cout << y << endl;
    cout << setprecision(10) << pi << endl;
    cout << setprecision(10) << pi_d << endl;

    char letter = 'A';
    char dollar = '$';

    cout << letter << endl;
    cout << dollar << endl;


    return 0;
}

