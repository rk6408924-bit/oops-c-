 //11
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    cout << "Binary = ";
    while (n != 0) {
        cout << n % 2;
        n /= 2;
    }

    return 0;
}