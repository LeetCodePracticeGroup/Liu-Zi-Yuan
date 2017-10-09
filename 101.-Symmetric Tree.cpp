class Solution {
public:
    bool helper(TreeNode* left, TreeNode* right) {
        if(left==nullptr || right==nullptr)  return left == right;
        return (left->val == right->val) && helper(left->left, right->right) && helper(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root == nullptr || helper(root->left, root->right);
    }  
};