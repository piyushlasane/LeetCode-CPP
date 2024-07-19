#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            head = head->next;
            fast = fast->next->next;
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
    ListNode* middle = solution.middleNode(head);

    cout << "The middle node value is: " << middle->val << endl;

    // Clean up the allocated memory
    current = head;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
