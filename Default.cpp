#include <iostream>

using namespace std;

// Default value for taxRate
double calculateTax(double income, double taxRate = 0.2) {
    return income * taxRate;
}

int main() {

    // The value we pass will override the default
    cout << calculateTax(10'000);
}