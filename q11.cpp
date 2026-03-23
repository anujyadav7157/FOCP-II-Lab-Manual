#include <iostream>
using namespace std;
int main() {
    int quantity;
    float price, total, discount = 0;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price per item: ";
    cin >> price;
    total = quantity * price;
    if (quantity > 1000) {
        discount = total * 0.10;
    }
    cout << "Total amount = " << total << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final amount = " << total - discount << endl;
    return 0;
}
