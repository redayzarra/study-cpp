#include <iostream>

using namespace std;

int main() {
    int age = 20;

    // And operator
    bool isOkay = age > 18 && age < 65;

    // Or operator
    bool isOk = age > 18 || age < 65;

    // Not operator
    cout << boolalpha << !isOkay << endl
         << isOk;
}