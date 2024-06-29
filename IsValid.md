## 20. Valid Parentheses
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/valid-parentheses/)

### Code

```cpp
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        string stk;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push_back(c);
            } else if (stk.empty() || !match(stk.back(), c)) {
                return false;
            } else {
                stk.pop_back();
            }
        }
        return stk.empty();
    }

private:
    bool match(char l, char r) {
        return (l == '(' && r == ')' || l == '[' && r == ']' || l == '{' && r == '}');
    }
};

int main() {
    string input;
    cout << "Enter a string containing brackets: ";
    cin >> input;

    Solution solution;
    bool result = solution.isValid(input);

    cout << "The string is " << (result ? "valid" : "invalid") << endl;

    return 0;
}
```