class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int ,int> mp;
        int count = 0;
        for(int num : nums){
            if(mp.find(num) != mp.end()){
                count += mp[num];
            }
            mp[num]++;
        }
        return count;
    }
};