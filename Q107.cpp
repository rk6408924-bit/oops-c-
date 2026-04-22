//107
#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    B obj;
    obj.show();
}