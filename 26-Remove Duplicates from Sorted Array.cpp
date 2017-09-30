class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() < 2) return nums.size();
        int count = 1;
        int tmp = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != tmp) {
                nums[count] = nums[i];
                count++;
                tmp = nums[i];
            }
        }
        return count;
    }
};