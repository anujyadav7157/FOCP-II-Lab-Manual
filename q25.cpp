#include <iostream>
using namespace std;

bool isValidPassword(string password) {
    bool hasUpper = false, hasLower = false;
    bool hasDigit = false, hasSpecial = false;

    for (char ch : password) {
        if (ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if (ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if (ch >= '0' && ch <= '9')
            hasDigit = true;
        else if (ch == '@' || ch == '#' || ch == '$' ||
                 ch == '%' || ch == '!' || ch == '&' || ch == '*')
            hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (isValidPassword(password))
        cout << "Strong Password\n";
    else
        cout << "Weak Password\n";

    return 0;
}
