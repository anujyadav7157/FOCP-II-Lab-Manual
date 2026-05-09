#include <iostream>
using namespace std;

class Employee {
    int emp_id;
    float salary;

public:
    Employee(int id, float sal) {
        emp_id = id;
        salary = sal;
    }

    void display() {
        cout << "ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e(101, 50000);
    e.display();
    return 0;
}
