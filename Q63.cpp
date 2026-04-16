//63
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4,1,2,1,2};
    int result = 0;

    for (int num : nums) {
        result ^= num;   // XOR
    }

    cout << "Single Number: " << result;
}