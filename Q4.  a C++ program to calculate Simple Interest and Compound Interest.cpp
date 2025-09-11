#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    double principal, rate, time;

    // Input values
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in %): ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    // Simple Interest
    double simpleInterest = (principal * rate * time) / 100;

    // Compound Interest
    double amount = principal * pow((1 + rate / 100), time);
    double compoundInterest = amount - principal;

    // Output results
    cout << "\n--- Interest Calculations ---\n";
    cout << "Simple Interest = " << simpleInterest << endl;
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}

