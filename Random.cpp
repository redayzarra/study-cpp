#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    long elapsedSeconds = time(nullptr); // January 1st 1970
    srand(elapsedSeconds);
    int number = rand() % 10;
    cout << number << endl;

    // Excercise
    const short minValue = 1;
    const short maxValue = 6;
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first << ", " << second << endl;
}