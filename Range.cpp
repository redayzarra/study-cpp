#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3};

    // Iterate over every element in numbers
    for (int number: numbers) {
        cout << number << endl;
    }

    // Iterate over every letter in string
    string name = "ReDay";
    for (char ch: name) {
        cout << ch << endl;
    }

    int temp[] = {60, 90, 80};
    int sum = 0;

    for (int num: temp) {
        sum += num;
    }
    double count = sizeof(temp) / sizeof(int);
    double average = sum / count;
    cout << average << endl;
}