class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        if(target>nums[n-1]){
            return n;
        }
        while(left<right){
            int mid = left+ (right-left)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                left = mid +1;
            }
            else{
                right = mid;
            }
        }
        return left;
    }
};