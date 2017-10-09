class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    
        ListNode* now = head;
        while(now != nullptr && now->next != nullptr) {
            if(now->next->val == now->val) now->next = now->next->next;
            else now = now->next;
        }
        return head;
    }
};