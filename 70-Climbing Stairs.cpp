class Solution {
public:
    int climbStairs(int n) {
        int t;
        int a = 1, b = 1;
        while(n--) {
            t = b;
            b = a+b;
            a = t;
        }
        return a;
    }
};