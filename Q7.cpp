//7
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    while (n != 0) {
        count++;
        n /= 10;
    }

    cout << "Total digits = " << count;
    return 0;
}



