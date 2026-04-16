//57
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            count++;
        }
    }

    cout << "Number of prime elements: " << count << endl;

    return 0;
}
