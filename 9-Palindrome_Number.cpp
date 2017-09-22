class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long newNum = 0;
        int y = x;
        while(y > 0)
        {
            newNum = newNum * 10 + (y % 10);
            y = y / 10;
        }
        if (newNum > pow(2, 31) || x != newNum) return false;
        else return true;
    }
};