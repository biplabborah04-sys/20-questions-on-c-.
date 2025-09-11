#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Input validation
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    // Calculate sum of series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << "Sum of the series S = 1 + 1/2 + 1/3 + ... + 1/" << n << " is: " << sum << endl;

    return 0;
}

