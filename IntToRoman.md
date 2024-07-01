## 12. Integer to Roman
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/integer-to-roman/description/)

### Code

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<string> cs = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> vs = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans;
        for (int i = 0; i < cs.size(); ++i) {
            while (num >= vs[i]) {
                num -= vs[i];
                ans += cs[i];
            }
        }
        return ans;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Solution solution;
    string result = solution.intToRoman(num);

    cout << "Roman numeral: " << result << endl;

    return 0;
}
```