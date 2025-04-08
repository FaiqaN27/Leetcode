class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
    int i = 0;
    int n = nums.size();
    if (n<=1) return true;
    while(i<n-1){
        if((nums[i]%2 == 0 && nums[i+1]%2 ==0) ||
         (nums[i]%2 != 0 && nums[i+1]%2 !=0)){
            return false;
        }
        i++;
    }
    return true;
    }
};

 