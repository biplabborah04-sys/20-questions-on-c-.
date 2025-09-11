#include <iostream>
#include <cmath>    // For sqrt() and pow()
#include <iomanip>  // For fixed and setprecision
using namespace std;

int main() {
    double a, b, c;
    cout << "Quadratic Equation Solver: ax^2 + bx + c = 0\n";

    // Input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    // Check for a valid quadratic equation
    if (a == 0) {
        cout << "This is not a quadratic equation (a must not be 0)." << endl;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;
    double realPart, imagPart;

    cout << fixed << setprecision(2); // For consistent formatting

    if (discriminant > 0) {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct.\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        cout << "Roots are real and equal.\n";
        cout << "Root = " << root << endl;
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary.\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}

