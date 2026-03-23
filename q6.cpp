#include <iostream>
using namespace std;
int main() {
    int n;
    float basic, bonus, netSalary;
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> basic;
        bonus = basic * 0.12;
        netSalary = basic + bonus;
        cout << "Bonus = " << bonus << endl;
        cout << "Net Salary = " << netSalary << endl;
    }
    return 0;
}
