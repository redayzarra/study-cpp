#include <iostream>

using namespace std;

int main() {

    // Nested For loops
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << "(" << x << "," << y << ")" << endl;
        }
    }

    // Exercise
    cout << "Rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}