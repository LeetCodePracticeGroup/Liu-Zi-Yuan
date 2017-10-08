class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int c = s.length() - 1;
        while(c >= 0 && s[c] == ' ') c--;
        while(c >= 0 && s[c] != ' ') {
            len++;
            c--;
        }
        return len;
    }
};