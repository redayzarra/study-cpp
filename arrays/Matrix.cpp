#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Creating matrix
    int matrix[2][3] = {
        {11, 12, 13}, 
        {20, 21, 22}
    };

    // Iterating over matrix in order
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << matrix[r][c] << ", ";
        }
    }
}