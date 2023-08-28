#include <iostream>

using namespace std;

// Function accepts type double called price - reference to the parameter
void increasePrice(double& price) {
    price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price;
}