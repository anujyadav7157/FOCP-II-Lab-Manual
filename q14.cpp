#include <iostream>
using namespace std;
int main() {
    int choice;
    float a, b;
    while (true) {
        cout << "\n===== Calculator Menu =====\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 5) {
            cout << "Exiting...";
            break;
        }
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice! Try again.\n";
            continue;
        }
        cout << "Enter two numbers: ";
        cin >> a >> b;
        switch (choice) {
            case 1:
                cout << "Result = " << a + b;
                break;
            case 2:
                cout << "Result = " << a - b;
                break;
            case 3:
                cout << "Result = " << a * b;
                break;
            case 4:
                if (b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Error! Division by zero.";
                break;
        }
    }
    return 0;
}
