 //41
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << add(2, 3) << endl;
    cout << add(2.5f, 3.5f);
    return 0;
}
