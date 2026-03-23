#include <iostream>
using namespace std;

int main() {
    int n, num, max;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter numbers:\n";
    cin >> max;

    for(int i = 2; i <= n; i++) {
        cin >> num;
        if(num > max)
            max = num;
    }

    cout << "Largest = " << max;

    return 0;
}
