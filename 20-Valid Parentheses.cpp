class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        
        for(auto a:s) {
            switch(a) {
                case '{':
                case '(':
                case '[':
                    k.push(a);
                    break;
                case '}':
                    if(!k.empty() && k.top() == '{') k.pop();
                    else return false;
                    break;
                case ')':
                    if(!k.empty() && k.top() == '(') k.pop();
                    else return false;
                    break;
                case ']':
                    if(!k.empty() && k.top() == '[') k.pop();
                    else return false;
                    break;
            }
        }
        if(k.empty()) return true;
        else return false;
    }
};