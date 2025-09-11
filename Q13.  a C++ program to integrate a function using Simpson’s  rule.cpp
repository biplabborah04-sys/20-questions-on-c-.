#include <iostream>
#include <cmath>
using namespace std;

// Define the function f(x) to integrate here
double f(double x) {
    // Example: f(x) = sin(x)
    return sin(x);
}

// Simpson's 1/3 Rule function
double simpsonsRule(double a, double b, int n) {
    if (n % 2 != 0) {
        cout << "Number of intervals (n) must be even for Simpson's 1/3 Rule.\n";
        return NAN;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 4 * f(x);
        }
    }

    return (h / 3) * sum;
}

int main() {
    double a, b;
    int n;

    cout << "Integrate function f(x) = sin(x) using Simpson's 1/3 Rule\n";

    cout << "Enter lower limit (a): ";
    cin >> a;

    cout << "Enter upper limit (b): ";
    cin >> b;

    cout << "Enter number of intervals (even number) n: ";
    cin >> n;

    double result = simpsonsRule(a, b, n);
    if (!isnan(result))
        cout << "Approximate integral = " << result << endl;

    return 0;
}

