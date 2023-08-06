#include <iostream>

int main() {
    int x = 10;
    int y = 3;
    int z = x + y;

    //int z = x / y;      // Both numbers are int so int division

    //double x = 10;
    //double z = x / y;   // Now the result will be a float

    y = x++;    // This increments x, you can decrement with x--;
                // First, y = x and then x will be incremented

    z = ++x;    // X will increment and then z will become x;

    //double x = 1 + 2 * 3;    // Multiplication and divison are higher

    double a = 10;
    double b = 5;

    z = (a + 10) / (3 * b);

    std::cout << z;

    return 0;
}