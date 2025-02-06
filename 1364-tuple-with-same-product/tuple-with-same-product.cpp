class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int , vector<pair<int,int>>> mp;
        int n = nums.size();
        int count = 0;

        for(int i =0; i<n-1; i++){
            for(int j = i+1 ; j<n ; j++){
                int product = nums[i] * nums[j];
                mp[product].push_back({nums[i] , nums[j]});
            }
        }

            for(auto &i : mp){
                int  k = i.second.size();
                if(k>1){
                    count += (k*(k-1))/2;
                }
            }
        return count*8;
    }
};