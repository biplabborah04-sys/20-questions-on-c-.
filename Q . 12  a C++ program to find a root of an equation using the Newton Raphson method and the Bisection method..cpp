#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Define the function f(x) here
double f(double x) {
    // Example: f(x) = x^3 - x - 2
    return x*x*x - x - 2;
}

// Derivative of f(x)
double df(double x) {
    // f'(x) = 3x^2 - 1
    return 3*x*x - 1;
}

// Newton-Raphson Method
void newtonRaphson(double initialGuess, double tolerance, int maxIter) {
    double x = initialGuess;
    int iter = 0;
    double h;

    cout << "\nNewton-Raphson Method:" << endl;
    cout << "Iter\t x_n\t\t f(x_n)" << endl;

    do {
        h = f(x) / df(x);
        x = x - h;
        cout << iter << "\t" << fixed << setprecision(6) << x << "\t" << f(x) << endl;
        iter++;
        if (iter > maxIter) {
            cout << "Newton-Raphson: Method did not converge within " << maxIter << " iterations.\n";
            return;
        }
    } while (fabs(h) >= tolerance);

    cout << "Root found: " << x << " after " << iter << " iterations.\n";
}

// Bisection Method
void bisection(double a, double b, double tolerance, int maxIter) {
    if (f(a) * f(b) >= 0) {
        cout << "Bisection method fails: f(a) and f(b) should have opposite signs.\n";
        return;
    }

    double c = a;
    int iter = 0;

    cout << "\nBisection Method:" << endl;
    cout << "Iter\t a\t\t b\t\t c\t\t f(c)" << endl;

    while ((b - a) >= tolerance && iter < maxIter) {
        c = (a + b) / 2;

        cout << iter << "\t" << fixed << setprecision(6) << a << "\t" << b << "\t" << c << "\t" << f(c) << endl;

        if (fabs(f(c)) < tolerance) {
            break;
        }

        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;

        iter++;
    }

    if (iter == maxIter)
        cout << "Bisection: Method did not converge within " << maxIter << " iterations.\n";
    else
        cout << "Root found: " << c << " after " << iter << " iterations.\n";
}

int main() {
    double initialGuess, a, b, tolerance;
    int maxIter;

    cout << "Equation: f(x) = x^3 - x - 2" << endl;

    cout << "Enter initial guess for Newton-Raphson method: ";
    cin >> initialGuess;

    cout << "Enter interval [a, b] for Bisection method (a and b): ";
    cin >> a >> b;

    cout << "Enter tolerance (e.g., 0.0001): ";
    cin >> tolerance;

    cout << "Enter maximum number of iterations: ";
    cin >> maxIter;

    // Run Newton-Raphson
    newtonRaphson(initialGuess, tolerance, maxIter);

    // Run Bisection
    bisection(a, b, tolerance, maxIter);

    return 0;
}

