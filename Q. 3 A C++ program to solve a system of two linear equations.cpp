#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1;
    double a2, b2, c2;

    cout << "Solve system of two linear equations using Cramer's Rule:\n";
    cout << "Equation 1: a1*x + b1*y = c1\n";
    cout << "Equation 2: a2*x + b2*y = c2\n";

    // Input coefficients
    cout << "Enter coefficients for Equation 1 (a1, b1, c1): ";
    cin >> a1 >> b1 >> c1;

    cout << "Enter coefficients for Equation 2 (a2, b2, c2): ";
    cin >> a2 >> b2 >> c2;

    // Calculate determinants
    double D  = a1 * b2 - a2 * b1;
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    cout << "\nDeterminants:\n";
    cout << "D  = " << D << "\n";
    cout << "Dx = " << Dx << "\n";
    cout << "Dy = " << Dy << "\n\n";

    // Check the type of solution
    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Unique solution:\n";
        cout << "x = " << x << ", y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "The system has infinitely many solutions.\n";
        } else {
            cout << "The system has no solution.\n";
        }
    }

    return 0;
}


