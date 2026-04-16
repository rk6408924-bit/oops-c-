//6
#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter number: ";
    cin >> n;

    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    cout << "Reverse = " << rev;
    return 0;
}
