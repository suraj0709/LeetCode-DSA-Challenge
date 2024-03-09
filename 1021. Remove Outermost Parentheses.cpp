class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int l = 0;
        int r = 0;
        for(char i : s){
            if(i == '(') l++;
            else r++;
            if(l > 1 && l != r){
                ans += i;
            }else if(l == r) l = r = 0;
        }
        return ans;
    }
};