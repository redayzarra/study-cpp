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

    // Exercise
    int salary = 10'000;
    if (salary < 3'000) {
        cout << "Too low";
    } else if (salary < 5'000) {
        cout << "Not bad";
    } else {
        cout << "Jackpot!";
    }

    // Nested-If statements
    bool isCitizen, isCa;
    if (isCitizen) {
        if (isCa) {
            int tuition = 0;
        } 
        else {
            int tuition = 1'000;
        }
    } else {
        int tuition = 3'000;
    }
}