## 1290. Convert Binary Number in a Linked List to Integer
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/)

### Code

```cpp
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        for (; head; head = head->next) {
            ans = ans << 1 | head->val;
        }
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the linked list (0 or 1 only): ";
    cin >> n;

    if (n == 0) {
        cout << "The linked list is empty." << endl;
        return 0;
    }

    cout << "Enter the elements (0 or 1 only): ";
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }

    Solution solution;
    int decimalValue = solution.getDecimalValue(head);

    cout << "The decimal value is: " << decimalValue << endl;

    // Clean up the allocated memory
    current = head;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
```
