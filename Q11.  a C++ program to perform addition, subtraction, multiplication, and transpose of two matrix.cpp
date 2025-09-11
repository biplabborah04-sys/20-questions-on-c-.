#include <iostream>
using namespace std;

// Function to input matrix elements
void inputMatrix(int matrix[][100], int rows, int cols, char name) {
    cout << "Enter elements of matrix " << name << " (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            cout << name << "[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
}

// Function to display matrix
void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

// Addition of two matrices
void addMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] + B[i][j];
}

// Subtraction of two matrices
void subtractMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] - B[i][j];
}

// Multiplication of two matrices
void multiplyMatrices(int A[][100], int B[][100], int result[][100], int m, int n, int p) {
    // Initialize result matrix to 0
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            result[i][j] = 0;

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            for (int k = 0; k < n; ++k)
                result[i][j] += A[i][k] * B[k][j];
}

// Transpose of a matrix
void transposeMatrix(int matrix[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transposed[j][i] = matrix[i][j];
}

int main() {
    int m, n, p;
    int A[100][100], B[100][100];
    int result[100][100];

    cout << "Matrix A dimensions (m x n):\n";
    cout << "Enter m (rows): ";
    cin >> m;
    cout << "Enter n (columns): ";
    cin >> n;

    cout << "Matrix B dimensions (n x p) for multiplication:\n";
    cout << "Enter p (columns): ";
    cin >> p;

    // Input matrices
    inputMatrix(A, m, n, 'A');
    inputMatrix(B, n, p, 'B');

    // Addition & Subtraction are possible only if both matrices have same dimensions (m x n)
    if (m != n || n != p) {
        cout << "\nNote: Addition and Subtraction require matrices of same dimensions (m x n).\n";
        cout << "For this program, addition and subtraction will only be performed if dimensions match.\n";
    }

    if (m == n && n == p) {
        // Addition
        addMatrices(A, B, result, m, n);
        cout << "\nAddition of A and B:\n";
        displayMatrix(result, m, n);

        // Subtraction
        subtractMatrices(A, B, result, m, n);
        cout << "\nSubtraction of B from A:\n";
        displayMatrix(result, m, n);
    } else {
        cout << "\nSkipping addition and subtraction due to dimension mismatch.\n";
    }

    // Multiplication
    multiplyMatrices(A, B, result, m, n, p);
    cout << "\nMultiplication of A and B:\n";
    displayMatrix(result, m, p);

    // Transpose of A
    int transposedA[100][100];
    transposeMatrix(A, transposedA, m, n);
    cout << "\nTranspose of matrix A:\n";
    displayMatrix(transposedA, n, m);

    // Transpose of B
    int transposedB[100][100];
    transposeMatrix(B, transposedB, n, p);
    cout << "\nTranspose of matrix B:\n";
    displayMatrix(transposedB, p, n);

    return 0;
}

