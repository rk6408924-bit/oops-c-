//90
#include <iostream>
using namespace std;

class Check {
    int x;

public:
    Check(int a) {
        x = a;
    }

    bool operator == (Check obj) {
        return (x == obj.x);
    }
};

int main() {
    Check c1(10), c2(10);

    if (c1 == c2)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}