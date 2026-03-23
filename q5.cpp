#include <iostream>
using namespace std;
int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, finalAmount;
    cout << "Enter item number: ";
    cin >> itemNo;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitPrice;
    amount = quantity * unitPrice;
    discount = amount * 0.20;
    finalAmount = amount - discount;
    cout << "Total amount = " << amount << endl;
    cout << "Discount (20%) = " << discount << endl;
    cout << "Final bill amount = " << finalAmount << endl;
    return 0;
}
