## 17. Letter Combinations of a Phone Number
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/)

### Code

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> result = {""};
        vector<string> d = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (auto& x : digits) {
            string s = d[x - '2'];
            vector<string> t;
            for (auto& a : result) {
                for (auto& b : s) {
                    t.push_back(a + b);
                }
            }
            result = move(t);
        }
        return result;
    }
};

int main() {
    string digits;
    cout << "Enter a string of digits: ";
    cin >> digits;

    Solution solution;
    vector<string> result = solution.letterCombinations(digits);

    cout << "Letter combinations: ";
    for (const auto& combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
```