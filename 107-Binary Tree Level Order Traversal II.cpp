class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > ans;
        helper(root, ans, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    void helper(TreeNode* root, vector<vector<int>> &ans, int level) {
        if(root == nullptr) return;
        if(ans.empty() || level > ans.size()-1) ans.push_back(vector<int>());
        ans[level].push_back(root->val);
        helper(root->left, ans, level+1);
        helper(root->right, ans, level+1);
    }
};