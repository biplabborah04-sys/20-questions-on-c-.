#include <iostream>
#include <cmath> // For sqrt()
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle:\n";
    cout << "Side a: ";
    cin >> a;
    cout << "Side b: ";
    cin >> b;
    cout << "Side c: ";
    cin >> c;

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "The entered sides do not form a valid triangle.\n";
    }

    return 0;
}

