//99
#include <iostream>
using namespace std;

class Max {
public:
    // Function for 2 numbers
    int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    // Function for 3 numbers
    int max(int a, int b, int c) {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }
};

int main() {
    Max m;

    cout << "Max of 2 numbers: " << m.max(10, 20) << endl;
    cout << "Max of 3 numbers: " << m.max(10, 25, 15) << endl;

    return 0;
}