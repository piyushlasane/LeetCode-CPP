## 1. Two Sum
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/two-sum/)

### Code

```cpp
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    if (i == j)
                        continue;
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};

int main()
{
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the two numbers are: [" << result[0] << " " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
```