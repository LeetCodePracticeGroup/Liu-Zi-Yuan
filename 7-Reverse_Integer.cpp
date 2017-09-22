class Solution {
public:
    int reverse(int x) {
        int absx = abs(x);
        long long newNum = 0;
        while(absx > 0)
        {
            newNum = newNum * 10 + (absx % 10);
            absx = absx / 10;
        }
        if (newNum > pow(2, 31) || newNum <= -1 * pow(2, 31)) return 0;
        
        if(x > 0) return newNum;
        else return -1 * newNum;
    }
};