//29
#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Duplicates: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                cout << arr[i] << " ";
        }
    }

    return 0;
}



