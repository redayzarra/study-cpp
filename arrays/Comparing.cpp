#include <iostream>

using namespace std;

int main() {
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};

    bool equal = true;
    for (int i = 0; i < size(first); i++) {
        if (first[i] != second[i]) {
            equal = false;
            break;
        }
    }

    cout << boolalpha << equal << endl;
}