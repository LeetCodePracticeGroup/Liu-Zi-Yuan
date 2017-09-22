class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int needValue;
        map<int, int> store;
        map<int, int>::iterator it;
        vector<int> result;
        for(int i=0; i<nums.size(); i++) {
            needValue = target - nums[i];
            it = store.find(needValue);
            if (it != store.end()) {
                result.push_back(store[needValue]);
                result.push_back(i);
                break;
            } else {
                store.insert(pair<int, int>(nums[i], i));
            }
        }
        return result;
    }
};