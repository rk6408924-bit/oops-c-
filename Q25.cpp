//25
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    cout << "Second Largest = " << arr[n - 2];

    return 0;
}