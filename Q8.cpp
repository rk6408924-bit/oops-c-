//8
#include <iostream>
using namespace std;

int main() {
    int x, y, result = 1;
    cout << "Enter base and power: ";
    cin >> x >> y;

    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    cout << "Result = " << result;
    return 0;
}



