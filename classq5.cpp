#include <iostream>
using namespace std;

class BankAccount {
    int acc_no;
    float balance;

public:
    BankAccount(int a, float b) {
        acc_no = a;
        balance = b;
    }

    void display() {
        cout << "Account No: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1(12345, 10000);
    b1.display();
    return 0;
}
