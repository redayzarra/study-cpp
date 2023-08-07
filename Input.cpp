#include <iostream>

using namespace std;

int main() {
    cout << "Enter values for x and y: ";

    double x;
    double y;

    cin >> x >> y;

    cout << x + y << endl;

    // Excercise
    cout << "Enter a value in Celsius: ";
    int celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 1.8) + 32;
    cout << fahrenheit;
}