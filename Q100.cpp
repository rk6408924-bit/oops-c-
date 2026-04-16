//100
#include <iostream>
using namespace std;

class Display {
public:
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    void display(float a) {
        cout << "Float: " << a << endl;
    }

    void display(char a) {
        cout << "Character: " << a << endl;
    }
};

int main() {
    Display d;

    d.display(10);
    d.display(5.5f);
    d.display('A');

    return 0;
}