class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result(nums.size());
        int even = 0 , odd = nums.size()-1;
        for(auto val:nums){
            if(val%2 == 0){
                result[even] = val;
                even++;
            }
            else{
                result[odd] = val;
                odd--;
            }
        }
        return result;
    }
};