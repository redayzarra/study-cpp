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

    // Order of operations: (), !, &&, ||
    bool a = true;
    bool b = false;
    bool c = false;
    bool result = b && !a; // A gets evaluated first and then b
}