## 83. Remove Duplicates from Sorted List
The problem can be found at the following link: [Question Link](https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/)

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* dummy = head;
        while (dummy->next != nullptr) {
            if (dummy->val == dummy->next->val) {
                dummy->next = dummy->next->next;
            } else {
                dummy = dummy->next;
            }
        }
        return head;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    if (n == 0) {
        cout << "The linked list is empty." << endl;
        return 0;
    }

    cout << "Enter the elements: ";
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
    ListNode* result = solution.deleteDuplicates(head);

    cout << "The linked list after removing duplicates: ";
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

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