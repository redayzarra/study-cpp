#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot";

    cout << fixed << setprecision(2) << 12.32429 << endl
         << 23.35235 << endl;

    const string course = "course";
    const string students = "students";

    // Excercise
    cout << setw(15) << course << setw(15) << students << endl
         << setw(15) << "C++" << setw(15) << 100 << endl
         << setw(15) << "Javascript" << setw(15) << 50 << endl;
}