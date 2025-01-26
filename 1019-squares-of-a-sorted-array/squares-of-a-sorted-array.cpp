class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> num(n);
        int start = 0;
        int end =n-1;
        int pos = n-1;
        while(start<=end){
            int startSqr = nums[start]*nums[start];
            int endSqr = nums[end]*nums[end];
            if(startSqr > endSqr){
                num[pos] = startSqr;
                start++;
            }
            else{
                num[pos] = endSqr;
                end--;
            }
            pos--;
        }
        return num;
    }
};