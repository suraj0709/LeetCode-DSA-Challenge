class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string st, tt;
        for(char i : s){
            if(st == "" && i == '#') continue;
            if(i == '#') st.pop_back();
            else st.push_back(i);
        }
        for(char i : t){
            if(tt == "" && i == '#') continue;
            if(i == '#') tt.pop_back();
            else tt.push_back(i);
        }

        return (st == tt);

        // stack<char> ss, st;

        // for(char i : s){
        //     if(ss.empty() && i == '#') continue;
        //     if(i != '#') ss.push(i);
        //     else ss.pop();
        // }
        // for(char i : t){
        //     if(st.empty() && i == '#') continue;
        //     if(i != '#') st.push(i);
        //     else st.pop();
        // }

        // return (ss == st);
    }
};