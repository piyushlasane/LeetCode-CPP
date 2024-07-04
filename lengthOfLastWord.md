## 58. Length of Last Word
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/length-of-last-word/description/)

### Code

```cpp
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag = false;
        int res = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                res++;
                flag = true;
            } else if (flag) {
                break;
            }
        }
        return res;
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Solution solution;
    int result = solution.lengthOfLastWord(s);

    cout << "Length of the last word: " << result << endl;

    return 0;
}
```