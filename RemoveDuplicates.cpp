#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // auto it = unique(nums.begin(), nums.end());
        // nums.erase(it, nums.end());
        // return nums.size();
        int k = 0;
        for (int x : nums) {
            if (k == 0 || x != nums[k - 1]) {
                nums[k++] = x;
            }
        }
        return k;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution solution;
    int newSize = solution.removeDuplicates(nums);

    cout << "New size after removing duplicates: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
