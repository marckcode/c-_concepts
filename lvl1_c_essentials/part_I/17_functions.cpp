#include<iostream>

using namespace std;

// Forward declaration
void playDemo(int n);

void playMusic(int songId1=3, int songId2=6) {
    cout << "Playing song..." << songId1 << " & "<< songId2 << endl;
}

void sayHi(string name) {
    cout << "Hi " + name << endl;
}

string sayHello(string name) {
    return "Hello " + name;
}

int CircleArea(int radius) {
    return 3.14 * radius * radius;
}

int main() {
    
    playMusic(101, 102);
    sayHi("Marck");
    cout << sayHello("Chris") << endl;
    
    int area = CircleArea(5);
    if (area > 10) {
        cout << "We can share some land for area." << endl;
    }

    playDemo(5);

    return 0;
}

// Declaration & definition
void playDemo(int n) {
    cout << "Playing Demo " << n << " ..." << endl;
}
