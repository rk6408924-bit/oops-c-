// 98
#include <iostream>
using namespace std;

class Test {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Test t;

    cout << "Add 2 numbers: " << t.add(10, 20) << endl;
    cout << "Add 3 numbers: " << t.add(10, 20, 30) << endl;

    return 0;
}
