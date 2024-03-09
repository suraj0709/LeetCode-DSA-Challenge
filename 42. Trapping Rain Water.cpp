class Solution {
private:
    vector<int> NGH(vector<int> h, int n){
        vector<int> v(n);
        int maxi = INT_MIN;
        for(int i=n-1; i>=0; i--){
            maxi = max(maxi, h[i]);
            v[i] = maxi;
        }
        return v;
    }
     vector<int> PGH(vector<int> h, int n){
        vector<int> v(n);
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi, h[i]);
            v[i] = maxi;
        }
        return v;
    }
public:
    // Approach 1   :   TC- O(n) SC- O(n)
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int> next;
        next = NGH(height, n);  //Next Greater Height
        vector<int> prev;
        prev = PGH(height, n);  //Prev Greater Height

        for(int i=0; i<n; i++){
            int ht = min(next[i], prev[i]) - height[i];
            ans += ht;
        }
        return ans;
    }
};