//89
#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) {
        x = a;
    }

    Test operator - (Test obj) {
        Test temp(0);
        temp.x = x - obj.x;
        return temp;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Test t1(30), t2(10), t3(0);

    t3 = t1 - t2;

    t3.display();

    return 0;
}