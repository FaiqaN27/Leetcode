class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        while(even<nums.size() && odd<nums.size()){
            if(nums[even]%2 > nums[odd]%2){
                swap(nums[even],nums[odd]);
                even+=2;
                odd+=2;
            }

            if(even<nums.size() && nums[even]%2 == 0) even+=2;
            if(odd<nums.size() && nums[odd]%2 == 1) odd+=2;
        }

        return nums;
    }
};