class Solution {
public:
    int longestValidParentheses(string s) {
        // Approach 2   :   Loops   :   TC -: O(n), SC -: O(1)
        int left = 0;
        int right = 0;
        int ans = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == '(') left++;
            else right++;

            if(left == right) ans = max(ans, left*2);
            else if(right > left) left = right = 0; 
        }
        left = right = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i] == '(') left++;
            else right++;

            if(left == right) ans = max(ans, left*2);
            else if(left > right) left = right = 0; 
        }

        return ans;

        // Approach 1   :   stack   :   TC -: O(n), SC -: O(n)
        // int ans = 0;
        // int n = s.size();
        // stack<int> st;
        // st.push(-1);
        // for(int i=0; i<n; i++){
        //     if(s[i] == '(') st.push(i);
        //     else{
        //         st.pop();
        //         if(st.empty()) st.push(i);
        //         else ans = max(ans, i-st.top());
        //     }
        // }

        // return ans;
    }
};