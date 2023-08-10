#include <iostream>

using namespace std;

int main() {
    int x = 1;
    double y = 2.2;

    // Since x is a int, it gets promoted to double to add with y
    double z = static_cast<double>(x) + y;
    cout << z << endl;
}