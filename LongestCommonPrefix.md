## 14. Longest Common Prefix
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/longest-common-prefix/)

### Code

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        for (int i = 0; i < strs[0].size(); ++i) {
            for (int j = 1; j < n; ++j) {
                if (strs[j].size() <= i || strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    Solution solution;
    string result = solution.longestCommonPrefix(strs);

    cout << "Longest common prefix: " << result << endl;

    return 0;
}
```