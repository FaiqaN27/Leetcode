class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even = 0 , odd = nums.size() -1;
         while(even < odd){
            if(nums[even]%2 > nums[odd]%2){
                swap(nums[even] , nums[odd]);
            }

            if(nums[even] % 2 == 0) even++;
            if(nums[odd] % 2 == 1) odd--;
         }

         return nums;
    }
};