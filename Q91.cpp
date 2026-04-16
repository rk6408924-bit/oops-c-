//91
#include <iostream>
using namespace std;

class Print {
    int x;

public:
    Print(int a) {
        x = a;
    }

    friend ostream& operator << (ostream &out, Print obj) {
        out << obj.x;
        return out;
    }
};

int main() {
    Print p1(50);

    cout << "Value: " << p1;

    return 0;
}