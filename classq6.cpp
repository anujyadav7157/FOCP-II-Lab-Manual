#include <iostream>
using namespace std;

class Book {
    string title;
    float price;

public:
    Book(string t, float p) {
        title = t;
        price = p;
    }

    void display() {
        cout << title << " - " << price << endl;
    }
};

int main() {
    Book b1("Maths", 500);
    Book b2("Physics", 600);

    b1.display();
    b2.display();
    return 0;
}
