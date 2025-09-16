#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
    } else {
        int temp = number;
        while (temp != 0) {
            int digit = temp % 10;  // Extract the last digit
            sum += digit;           // Add it to the sum
            temp /= 10;             // Remove the last digit
        }

        cout << "Sum of digits of " << number << " = " << sum << endl;
    }

    return 0;
}

