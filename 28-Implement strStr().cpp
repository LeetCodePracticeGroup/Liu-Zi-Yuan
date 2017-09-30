class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int hl = haystack.length();
        int nl = needle.length();
        for(int i=0; i<hl-nl+1; i++) {
            int j=0;
            for( ; j<needle.length(); j++) {
                if(needle[j] != haystack[i+j]) break;
            }
            if(j == nl) return i;
        }
        return -1;
    }
};