class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }   

        unordered_set<int> st;

        for(auto val : mp){
            st.insert(val.second);
        }

        return st.size() == mp.size();
    }
};