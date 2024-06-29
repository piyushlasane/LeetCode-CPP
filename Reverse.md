## 7. Reverse Integer
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/reverse-integer/)

### Code

```cpp
#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        for (; x != 0; x /= 10) {
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev = rev * 10 + x % 10;
        }
        return rev;
    }
};

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    Solution solution;
    int result = solution.reverse(x);

    cout << "Reversed integer: " << result << endl;

    return 0;
}
```