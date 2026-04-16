//43
#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B : public A {
public:
    void show() {
        cout << "Value = " << x;
    }
};

int main() {
    B obj;
    obj.x = 10;
    obj.show();
    return 0;
}