#include <iostream>
using namespace std;

int main() {
    char choice;
    double temperature, converted;

    cout << "Temperature Converter\n";
    cout << "----------------------\n";
    cout << "Enter 'C' to convert from Celsius to Fahrenheit\n";
    cout << "Enter 'F' to convert from Fahrenheit to Celsius\n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        converted = (temperature * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit: " << converted << "°F\n";
    } 
    else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        converted = (temperature - 32.0) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << converted << "°C\n";
    } 
    else {
        cout << "Invalid choice! Please enter 'C' or 'F'.\n";
    }

    return 0;
}

