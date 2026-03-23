#include <iostream>
using namespace std;
int main() {
    float radius, area;
    cout << "Enter radius of the fountain: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "Area of the circle = " << area;
    return 0;
}
