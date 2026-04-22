//110
#include<iostream>
using namespace std;

class A {
public:
    int x;
    A(int a) {
        x = a;
    }
};

class B : public A {
public:
    B(int a) : A(a) {}

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    B obj(5);
    obj.display();
}