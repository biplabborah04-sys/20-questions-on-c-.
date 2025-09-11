#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input matrix size
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    // Check for valid size
    if (m <= 0 || n <= 0) {
        cout << "Invalid matrix size. Rows and columns must be positive integers.\n";
        return 1;
    }

    // Declare 2D array
    int matrix[100][100];  // Assumes max size 100x100

    // Input matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Print matrix
    cout << "\nMatrix (" << m << " x " << n << ") is:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

