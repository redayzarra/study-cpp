#include <iostream>

using namespace std;

// Double& is essentially a reference to the original price parameter
void increasePrice(double& price) {
    price *= 1.2;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price;
}