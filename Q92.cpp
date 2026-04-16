// 92
#include <iostream>
using namespace std;

class Compare {
    int value;

public:
    Compare(int v) {
        value = v;
    }

    // Overloading > operator
    bool operator > (Compare obj) {
        return (value > obj.value);
    }
};

int main() {
    Compare c1(20), c2(15);

    if (c1 > c2)
        cout << "c1 is greater";
    else
        cout << "c2 is greater";

    return 0;
}