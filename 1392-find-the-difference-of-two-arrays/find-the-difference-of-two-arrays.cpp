class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        unordered_set <int> s1;
        unordered_set <int> s2;
        
        for(int i=0 ;i<nums1.size(); i++){
             s1.insert(nums1[i]);
        }

         for(int j=0; j<nums2.size(); j++){
            s2.insert(nums2[j]);
         }

        for(auto i:s1){
             if(s2.find(i) == s2.end()){
                answer[0].push_back(i);
            }
        }

        for(auto j:s2){
           if(s1.find(j) == s1.end()){
                answer[1].push_back(j);
            }
        }

        return answer;
    }
};