class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // count length
        int len = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            len++;
            curr = curr->next;
        }

        // removing the head
        if (n == len) {
            return head->next;
        }

        // go to the node just before the one to delete
        curr = head;
        int c = 1;
        while (c != len - n) {
            curr = curr->next;
            c++;
        }
        curr->next = curr->next->next;
        return head;
    }
};