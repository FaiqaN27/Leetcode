class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> num;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+= nums[i];
            num.push_back(sum);
        }
        return num;
    }
};