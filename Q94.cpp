// 94
#include <iostream>
using namespace std;

class Demo {
public:
    int sum(int a, int b) {
        return a + b;
    }

    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Demo d;

    cout << "Sum of 2 numbers: " << d.sum(10, 20) << endl;
    cout << "Sum of 3 numbers: " << d.sum(10, 20, 30) << endl;

    return 0;
}