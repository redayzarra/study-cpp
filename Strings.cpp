#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch = 'a';
    cout << ch << endl;
    cout << +ch << endl;

    string name;
    cout << "Enter your name: " << endl;
    // cin >> name; Will ignore anything after space, including space
    getline(cin, name);
    cout << "Hi, " << name << "!" << endl;

    string city, state, zip;

    cout << "Enter your state: " << endl;
    getline(cin, state);

    cout << "Enter your city: " << endl;
    getline(cin, city);

    cout << "Enter your zipcode: " << endl;
    getline(cin, zip);

    cout << city << ", " << state << ", " << zip << endl;
}