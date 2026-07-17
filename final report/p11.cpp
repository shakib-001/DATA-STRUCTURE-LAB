#include <iostream>
using namespace std;
int main() {
    int rows = 3, cols = 4;
    int matrix[3][4] = {
        {1, 6, 7, 9},
        {2, 4, 8, 5},
        {3, 1, 9, 4}
    };
    int transpose[4][3];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

