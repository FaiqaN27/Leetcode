class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     int n = nums.size();
     int count = 0;
     for(int i=0; i<n ; i++){
        count+=nums[i];
        nums[i] = count;
     }
     return nums;
    }
};