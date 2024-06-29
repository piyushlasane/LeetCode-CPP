## 945. Min Increment For Unique
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/minimum-increment-to-make-array-unique/)

### Code

```cpp
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
#include <bits/stdc++.h> //includes all standard libraries!!
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int moves = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int incr = nums[i - 1] - nums[i] + 1;
                nums[i] += incr;
                moves += incr;
            }
        }
        return moves;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution solution;
    int result = solution.minIncrementForUnique(nums);

    cout << "Minimum increments to make array elements unique: " << result << endl;

    return 0;
}
```