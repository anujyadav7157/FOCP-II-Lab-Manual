#include <iostream>
using namespace std;

int main() {
    float temp;
    int choice;

    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius = " << (temp - 32) * 5 / 9;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit = " << (temp * 9 / 5) + 32;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
