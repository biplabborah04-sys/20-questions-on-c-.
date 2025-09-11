#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        // Check divisibility up to square root of the number
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}

