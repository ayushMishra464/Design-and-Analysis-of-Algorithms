#include <iostream>

using namespace std;

void matrixMultiply(int mat1[][3], int mat2[][2], int m1, int n1, int m2, int n2, int result[][2]) {
    if (n1 != m2) {
        cout << "Error: Matrix dimensions are not compatible for multiplication." << endl;
        return;
    }

    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][2], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    matrixMultiply(mat1, mat2, 2, 3, 3, 2, result);

    cout << "Resultant Matrix:" << endl;
    printMatrix(result, 2, 2);

    return 0;
}
