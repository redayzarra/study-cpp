#include <iostream>

using namespace std;

int main() {
    int sales = 11'000;
    double commission = (sales > 10'000) ? 0.1 : 0.05;

    cout << commission;
}