class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return help(head, nullptr);
    }
    TreeNode* help(ListNode* head, ListNode* tail) {
        if(head == tail) return nullptr;
        ListNode *mid = head, *tmp = head;
        while(tmp != tail && tmp->next != tail) {
            tmp = tmp->next->next;
            mid = mid->next;
        }
        TreeNode *root = new TreeNode(mid->val);
        root->left = help(head, mid);
        root->right = help(mid->next, tail);
        return root;
    }
};