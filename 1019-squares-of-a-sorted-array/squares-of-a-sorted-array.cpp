class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size(); 
       vector<int> num(n);
       int left = 0 ;
       int right = n-1;
       int index = n-1;
       while(left<=right){
        int leftSqr = nums[left]*nums[left];
        int rightSqr = nums[right]*nums[right];
        if(leftSqr<rightSqr){
            num[index] = rightSqr;
            right--;
        }
        else{
            num[index] = leftSqr;
            left++; 
        }
         index--;
       }
       return num;
    }
};