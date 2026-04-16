//30
#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    cout << "Vowels = " << count;
    return 0;
}
