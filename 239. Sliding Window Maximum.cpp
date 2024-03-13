class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;
        int n = nums.size();
        for(int i=0; i<n; i++){
            while(!q.empty()){
                if(nums[q.back()] < nums[i]) q.pop_back();
                else break;
            }
            q.push_back(i);
            while(i - q.front() >= k) q.pop_front();

            if(i >= k-1)
                ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};