 //32
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}



