#include <iostream>

using namespace std;

int main() {
    // Reverse for-loop going from 5 to 1 inclusive
    for (int i = 5; i > 0; i--) {
        if (i % 2 != 0)
            cout << i << endl;
    }

    // Exercise - factorials
    cout << "Enter your number :";
    int num;
    cin >> num;

    int res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    cout << res << endl;
}