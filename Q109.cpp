//109
#include<iostream>
using namespace std;

class A {
protected:
    int x = 10;
};

class B : public A {
public:
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    B obj;
    obj.display();
}