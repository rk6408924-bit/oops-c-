//65
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int count = 0, candidate;

    for (int num : nums) {
        
        if (count == 0) {
            candidate = num;
        }

        
        if (num == candidate) {
            count = count + 1;
        } else {
            count = count - 1;
        }
    }

    cout << "Majority Element: " << candidate;
    
    return 0;
}