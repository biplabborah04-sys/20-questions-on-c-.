#include <iostream>
#include <cmath>    // For sqrt()
#include <vector>   // To store user inputs
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    int n;
    cout << "Enter the number of values (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of values must be positive.\n";
        return 1;
    }

    vector<double> numbers(n);
    double sum = 0.0;

    // Input n numbers and calculate sum
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate mean
    double mean = sum / n;

    // Calculate standard deviation
    double varianceSum = 0.0;
    for (int i = 0; i < n; ++i) {
        varianceSum += pow(numbers[i] - mean, 2);
    }
    double standardDeviation = sqrt(varianceSum / n);

    // Display results
    cout << fixed << setprecision(4);
    cout << "\nMean = " << mean << endl;
    cout << "Standard Deviation = " << standardDeviation << endl;

    return 0;
}

