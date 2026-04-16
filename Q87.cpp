//87
#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number() {
        x = 0;
    }

    Number(int a) {
        x = a;
    }

    // Operator overloading
    Number operator + (Number obj) {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    n3 = n1 + n2;   // calls operator+

    n3.display();

    return 0;
}