#include <iostream>
using namespace std;

int main() {
    float basicSalary, HRA, DA, otherAllowances, totalSalary;

    // Input section
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter HRA: ";
    cin >> HRA;

    cout << "Enter DA: ";
    cin >> DA;

    cout << "Enter Other Allowances: ";
    cin >> otherAllowances;

    // Calculation
    totalSalary = basicSalary + HRA + DA + otherAllowances;

    // Output the result
    cout << "\nTotal Salary of the Employee = " << totalSalary << endl;

    return 0;
}

