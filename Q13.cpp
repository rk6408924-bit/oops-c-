
//13
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    cout << "Largest = " << max;
    return 0;
}