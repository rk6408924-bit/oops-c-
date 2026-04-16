// 93
#include <iostream>
using namespace std;

class Sample {
    int x;

public:
    Sample(int a = 0) {
        x = a;
    }

    // Overloading = operator
    Sample operator = (Sample obj) {
        x = obj.x;
        return *this;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Sample s1(10), s2;

    s2 = s1;   // calls overloaded =

    cout << "s1: ";
    s1.display();

    cout << "s2: ";
    s2.display();

    return 0;
}