
//64
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3,0,1};
    int n = nums.size();

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int num : nums) sum += num;

    cout << "Missing Number: " << total - sum;
}