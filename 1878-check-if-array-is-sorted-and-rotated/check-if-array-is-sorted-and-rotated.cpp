class Solution {
public:
    bool check(vector<int>& nums) {
      int n = nums.size();
      int rotation = 0;

      if(n<=1) return true;

      for(int i=1; i<n ;i++){
        if(nums[i] < nums[i-1]){
            rotation++;
        }
      }

      if(nums[0] < nums[n-1]){
        rotation++;
      }

      return rotation<=1;
    }
};