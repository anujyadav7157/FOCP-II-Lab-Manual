#include <iostream>
using namespace std;
int main() {
    int choice;
    float a, b;
    do {
        cout << "\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        switch(choice) {
            case 1: cout << "Result = " << a + b; break;
            case 2: cout << "Result = " << a - b; break;
            case 3: cout << "Result = " << a * b; break;
            case 4: cout << "Result = " << a / b; break;
        }
    } while(choice != 5);
    return 0;
}
