#include<iostream>

using namespace std;

int main() {
    int calories = 0;
    int stop = 5;
    

    cout << "Break statement test..." << endl;
    while (calories < 15) {
        cout << "Burning: " << calories + 1 << endl;
        if (calories == stop) {
            break;
        }

        calories++;
    }

    cout << "Out of the loop." << endl;

    cout << "Continue statement test..." << endl;
    while (calories < 30) {
        if(calories % 5 == 0) {
            cout << "Well done!" << endl;
            calories++;
            continue;
        }

        cout << "Runing: " << calories + 1 << endl;
        calories++;
    }

    return 0;
}
