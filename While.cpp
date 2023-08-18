#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i++;
    }

    // Exercise
    int number = 0;
    while (number < 1 || number > 5) {
        cout << "Number: ";
        cin >> number;
        if (number < 1 || number > 5) {
            cout << "Enter a number between 1 and 5!";
        }
    }

    // Exercise #2
    int num;
    while (number != 7) {
        cout << "Guess: ";
        cin >> num;
        if (num != 7) {
            cout << "The number should be 7";
        }
    }

}