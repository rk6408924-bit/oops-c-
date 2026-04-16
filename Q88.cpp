//88
#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int a) {
        x = a;
    }

    void operator ++ () {
        x = x + 1;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Demo d1(5);

    ++d1;   // calls operator++

    d1.display();

    return 0;
}