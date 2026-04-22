//108
#include<iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Base class show" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "Derived class show" << endl;
    }
};

int main() {
    A* ptr;
    B obj;
    ptr = &obj;
    ptr->show();
}