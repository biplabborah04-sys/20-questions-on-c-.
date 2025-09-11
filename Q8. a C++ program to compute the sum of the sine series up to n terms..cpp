#include <iostream>
#include <cmath>    // For pow() and factorial
#include <iomanip>  // For setprecision
using namespace std;

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 2; i <= num; ++i)
        fact *= i;
    return fact;
}

// Function to compute sine series sum
double sineSeries(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        int termExponent = 2 * i + 1;
        double term = pow(-1, i) * pow(x, termExponent) / factorial(termExponent);
        sum += term;
    }
    return sum;
}

// Function to print Fibonacci series
void fibonacciSeries(int n) {
    long long a = 0, b = 1, next;

    cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    double angle;

    cout << "Enter number of terms (n): ";
    cin >> n;

    // Sine Series
    cout << "Enter angle in degrees for sine calculation: ";
    cin >> angle;

    double radians = angle * M_PI / 180.0;  // Convert degrees to radians
    double sineSum = sineSeries(radians, n);

    cout << fixed << setprecision(6);
    cout << "Sum of sine series up to " << n << " terms = " << sineSum << endl;

    // Fibonacci Series
    fibonacciSeries(n);

    return 0;
}

