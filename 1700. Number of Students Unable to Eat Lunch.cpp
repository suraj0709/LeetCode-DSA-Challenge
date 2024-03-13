class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map<int, int> m;
        stack<int> s;
        queue<int> q;
        for(int i=students.size()-1; i>=0; i--){
            m[students[i]]++;
            s.push(sandwiches[i]);
            q.push(students[i]);
        }

        while(!q.empty()){
            if(m[1] == 0 && s.top() == 1) return m[0];
            if(m[0] == 0 && s.top() == 0) return m[1];
            if(q.front() == s.top()){
                int x = s.top();
                m[x]--;
                q.pop();
                s.pop();
            }
            else{
                int x = q.front();
                q.pop();
                q.push(x);
            }
        }
        return 0;
    }
};