class MinStack {
    stack<int> s;
    int mini = INT_MAX;
    vector<int> v;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        mini = min(mini, val);
        v.push_back(mini);
    }
    
    void pop() {
        s.pop();
        v.pop_back();
        if(v.empty()) mini = INT_MAX;
        else mini = v[v.size()-1];
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return v[v.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */