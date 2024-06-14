#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size(), k = 0;
        while (k < j) {
            if (nums[k] == 0) swap(nums[i++], nums[k++]);
            else if (nums[k] == 2) swap(nums[--j], nums[k]);
            else k++;
        }
    }
};

void printArray(const vector<int>& nums) {
    for (int element : nums) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    vector<int> nums(length);
    cout << "Enter the elements of the array (only 0, 1, or 2):\n";
    for (int i = 0; i < length; ++i) {
        cin >> nums[i];
    }

    cout << "Before sorting: " << endl;
    printArray(nums);

    Solution ans;
    ans.sortColors(nums);

    cout << "After sorting: " << endl;
    printArray(nums);

    return 0;
}