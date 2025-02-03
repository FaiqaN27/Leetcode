class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n =nums.size();
        int inc = 1;
        int dec = 1;
        int max_len = 1;

        for(int i = 0; i<n-1 ; i++){
            if(nums[i] < nums[i+1]){
                dec++;
                inc = 1;
            }
            else if(nums[i]> nums[i+1]){
                inc++;
                dec= 1;
            }
            else{
                inc=1;
                dec=1;
            }
            max_len = max(max_len,max(inc,dec));
        }
        
        return max_len;
    }
};