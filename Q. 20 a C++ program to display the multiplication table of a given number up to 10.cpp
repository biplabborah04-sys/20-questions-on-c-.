#include <iostream>
using namespace std;

int main() {
    int number;

    // Input the number
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Display the multiplication table up to 10
    cout << "\nMultiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}


