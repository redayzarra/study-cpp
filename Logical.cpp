#include <iostream>

using namespace std;

int main() {
    int age = 20;

    // And operator
    bool isOkay = age > 18 && age < 65;
    cout << boolalpha << isOkay;
}