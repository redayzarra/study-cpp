#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double result = floor(1.2);
    cout << result << endl;

    cout << "What is the radius of the circle? ";
    double radius;
    cin >> radius;
    double area = 3.14 * pow(radius, 2);
    cout << area;
}