#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello, " + name + "!";
}

string fullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}

int main() {
    greet(fullName("ReDay", "Zarra"));
}