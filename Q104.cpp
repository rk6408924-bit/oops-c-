//104
#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base Class A" << endl;
    }
};

class B : public A {};
class C : public A {};

int main() {
    B obj1;
    C obj2;
    obj1.show();
    obj2.show();
}