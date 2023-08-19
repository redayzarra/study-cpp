#include <iostream>

using namespace std;

int main() {

    // Nested For loops
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << "(" << x << "," << y << ")" << endl;
        }
    }
}