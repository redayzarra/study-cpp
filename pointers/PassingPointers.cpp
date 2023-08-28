#include <iostream>

using namespace std;

// Function accepts type double called price - reference to the parameter
void increasePrice(double& price) {
    price *= 1.2;
}

// Exercise - swapping values of pointers
void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price << endl;

    // Checking exercise 
    int x = 10;
    int y = 20;
    swap(&x, &y);
    cout << x << ", " << y;
}