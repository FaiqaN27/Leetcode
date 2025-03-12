class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s = nums.size();
        vector<int> num(s);
        int start = 0;
        int end = s-1;
        int pos = s-1;

        while(start<=end){
            int startSqr = nums[start] * nums[start];
            int endSqr = nums[end] * nums[end];
            if(startSqr < endSqr){
                num[pos] = endSqr;
                end--;
            }
            else{
                num[pos] = startSqr;
                start++;
            }
            pos--;
        }
        return num;
    }
};