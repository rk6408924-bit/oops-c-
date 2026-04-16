//38
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void input() {
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;
    r.input();

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter();

    return 0;
}