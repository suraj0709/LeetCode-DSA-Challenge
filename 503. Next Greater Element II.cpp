class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        vector<int> ans(n);

        for(int i=n-1; i>=0; i--){
            s.push(nums[i]);
        }

        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top() <= nums[i]) s.pop();
            (!s.empty())? ans[i] = s.top() : ans[i] = -1;
            s.push(nums[i]);
        }
        return ans;
    }
};