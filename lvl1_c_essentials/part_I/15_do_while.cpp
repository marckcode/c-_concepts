#include<iostream>

using namespace std;

// Exit control loop, executed at least one.
int main() {
    int money = 5;

    do {
        cout << "Shopping... " << money << "$" << endl;
        money--;
    }while(money > 0);


    return 0;

}
