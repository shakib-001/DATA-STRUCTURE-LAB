#include <iostream>
using namespace std;

int main() {
    int mat1[3][3] = {{12, 13, 14}, {15, 16, 17}, {18, 19, 20}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat3[3][3] = {{101, 104, 107}, {102, 105, 108}, {103, 106, 109}};
    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
        }
    }
    cout << "Addition: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

