class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() <= 0) return "";
        string prefix = "";
        int idx = 0;
        int str0size = strs[0].size();
        while(1) {
            for(int i=1; i<strs.size(); i++) {
                if(idx >= strs[i].size() || (strs[i][idx] != strs[0][idx]))
                    return prefix;
            }
            prefix+=strs[0][idx];
            idx++;
            
            if(idx > str0size) return prefix;
        }
    }
};