
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* curr = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Merge alternately
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
