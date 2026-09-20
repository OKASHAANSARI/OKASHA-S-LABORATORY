#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], sum[10][10], product[10][10];
    int r1, c1, r2, c2;

    // Input size of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    // Input size of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix Addition
    if (r1 == r2 && c1 == c2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "\nAddition of matrices:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMatrix addition is not possible.\n";
    }

    // Matrix Multiplication
    if (c1 == r2) {
        // Initialize product matrix
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                product[i][j] = 0;
            }
        }

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    product[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "\nMultiplication of matrices:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMatrix multiplication is not possible.\n";
    }

    return 0;
}
