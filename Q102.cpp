//102
#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void display() {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void print() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.show();
    obj.display();
    obj.print();
}