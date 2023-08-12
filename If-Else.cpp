#include <iostream>

using namespace std;

int main() {
    int temp = 75;

    // If statements
    if (temp < 50) {
        cout << "Cold.";
    } else if (temp < 90) {
        cout << "Nice!";
    } else {
        cout << "Hot.";
    }
}