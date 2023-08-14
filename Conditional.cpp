#include <iostream>

using namespace std;

int main() {
    int sales = 11'000;
    double commission = (sales > 10'000) ? 0.1 : 0.05;

    cout << commission;

    // Exercise
    cout << "Enter two values: ";
    int first, second;

    cin >> first >> second;

    // Long way
    int res;
    if (first > second) {
        res = first;
    } else {
        res = second;
    }

    // Concise way
    res = (first > second) ? first : second;
    cout << res;
}