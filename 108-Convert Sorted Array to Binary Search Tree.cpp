class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums, 0, nums.size());
    }
    TreeNode* help(vector<int>& nums, int left, int right) {
        if(right <= left) return nullptr;
        int mid = (left + right) / 2;
        TreeNode* rootNode = new TreeNode(nums[mid]);
        rootNode->left = help(nums, left, mid);
        rootNode->right = help(nums, mid+1, right);
        return rootNode;
    }
};