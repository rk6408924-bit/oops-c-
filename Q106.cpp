//106
#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
};

int main() {
    B obj;
}