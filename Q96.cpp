//96
#include <iostream>
using namespace std;

class Demo {
public:
    void show(int a, float b) {
        cout << "Int: " << a << " Float: " << b << endl;
    }

    void show(float a, int b) {
        cout << "Float: " << a << " Int: " << b << endl;
    }
};

int main() {
    Demo d;

    d.show(10, 5.5);
    d.show(5.5, 10);

    return 0;
}