class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int dp[nums.size()] = {nums[0]};
        
        for(int i=1; i<nums.size(); i++) {
            dp[i] = nums[i] + (dp[i-1] > 0 ? dp[i-1] : 0);
            max = max > dp[i] ? max : dp[i];
        }
        return max;
    }
};