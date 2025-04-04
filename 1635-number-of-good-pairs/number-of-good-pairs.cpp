class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(101 , 0);
        int count = 0;
        for(int n : nums){
            count += freq[n];

            freq[n]++;
        }

        return count;
    }
};