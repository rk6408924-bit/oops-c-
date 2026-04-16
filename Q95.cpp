// 95
#include <iostream>
using namespace std;

class Demo {
public:
    int sum(int a, int b) {
        return a + b;
    }

    float sum(float a, float b) {
        return a + b;
    }
};

int main() {
    Demo d;

    cout << "Integer sum: " << d.sum(5, 10) << endl;
    cout << "Float sum: " << d.sum(2.5f, 3.5f) << endl;

    return 0;
}