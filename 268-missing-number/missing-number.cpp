class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }

        for(int j=0;j<=st.size(); j++){
            if(st.find(j) == st.end()){
                return j;
            }
        }

        return -1;
    }
};