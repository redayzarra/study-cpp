#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i % 3 == 0) break;
        cout << i << endl;
    }

    // Exercise 
    while (true) {
        cout << "Number: ";
        int number;
        cin >> number;
        if (number >= 1 && number <= 5) break;
    }
}