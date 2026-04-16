//33
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ')
            cout << str[i];
    }

    return 0;
}
