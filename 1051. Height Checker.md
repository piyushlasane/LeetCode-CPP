## 1051. height Checker
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/height-checker/)

### Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int ans = 0;
        for (size_t i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                ++ans;
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    int n;

    cout << "Enter the number of elements in the heights array: ";
    cin >> n;

    vector<int> heightsArray(n);
    cout << "Enter the elements of the heights array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> heightsArray[i];
    }

    int result = solver.heightChecker(heightsArray);

    cout << "Number of students in the wrong positions: " << result << endl;

    return 0;
}
```