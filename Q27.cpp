//27
#include <iostream>
using namespace std;

int main() {
    int n, arr[100], sum = 0;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum;
    return 0;
}



