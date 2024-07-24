## 1550. Three Consecutive Odds
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/three-consecutive-odds/description/)

### Code

```cpp
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size() < 3) return false;
        for (int i = 0; i < arr.size() - 2; ++i) {
            if ((arr[i] & 1) == 1 && (arr[i + 1] & 1) == 1 && (arr[i + 2] & 1) == 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution solution;
    bool result = solution.threeConsecutiveOdds(arr);

    cout << (result ? "There are three consecutive odd numbers in the array." : "There are no three consecutive odd numbers in the array.") << endl;

    return 0;
}
```