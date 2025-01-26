class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         int n = nums.size();
         int size = 2*n;
        vector<int> ans(size);
        for(int i=0 ; i<n; i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
};