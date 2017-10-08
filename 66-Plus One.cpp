class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int size = digits.size();
        for(int i=size-1; i>=0; i--) {
            if(digits[i] == 9 && i != 0) digits[i] = 0;
            else if(digits[i] == 9 && i == 0) {
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }
            else {
                digits[i]++;
                return digits;
            }
        }
        return digits;
    }
};