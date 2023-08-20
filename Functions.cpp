#include <iostream>

using namespace std;

// Function definition
void greet(string name) {
    cout << "Hello, " + name + "!" << endl;
}

// Function declaration
void greeting(string name);

string fullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}

//Exercise
int sum(int x, int y) {
    cout << x + y;
    return 0;
}


int main() {
    greet(fullName("ReDay", "Zarra"));

    sum(5, 6);
}