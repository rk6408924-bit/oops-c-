//97
#include <iostream>
using namespace std;

class Area {
public:
    // Area of square
    int area(int side) {
        return side * side;
    }

    // Area of rectangle
    int area(int length, int breadth) {
        return length * breadth;
    }

    // Area of circle
    float area(float radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;

    cout << "Square area: " << a.area(4) << endl;
    cout << "Rectangle area: " << a.area(5, 3) << endl;
    cout << "Circle area: " << a.area(2.5f) << endl;

    return 0;
}