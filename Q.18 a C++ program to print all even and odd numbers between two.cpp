#include <iostream>
using namespace std;

int main() {
    int lower, upper;

    // Input lower and upper limits
    cout << "Enter the lower limit: ";
    cin >> lower;

    cout << "Enter the upper limit: ";
    cin >> upper;

    cout << "\nEven numbers between " << lower << " and " << upper << " are:\n";
    for (int i = lower; i <= upper; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\n\nOdd numbers between " << lower << " and " << upper << " are:\n";
    for (int i = lower; i <= upper; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

