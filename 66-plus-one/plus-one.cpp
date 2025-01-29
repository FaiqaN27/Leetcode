class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n = nums.size() -1;
        for(int  i = n ; i>=0; i--){
            if(nums[i] != 9){
                nums[i]++;
                return nums;
            }

            nums[i] = 0;
            if(i == 0){
                nums.insert(nums.begin() , 1);
                return nums;
            }
        }
        return nums;
    }
};