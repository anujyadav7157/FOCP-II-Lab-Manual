#include <iostream>
using namespace std;
int main() {
    int start, end, flag;
    cout << "Enter range: ";
    cin >> start >> end;
    for(int i = start; i <= end; i++) {
        if(i <= 1) continue;
        flag = 1;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << i << " ";
    }
    return 0;
}
