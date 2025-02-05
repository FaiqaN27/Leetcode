class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    vector<int> arr;
        for(int  i =0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
               arr.push_back(i);
            }
        }

        if(arr.empty()) return true;
        else if(arr.size() != 2) return false;

        int i = arr[0] , j = arr[1];
        return (s1[i] == s2[j] && s1[j] == s2[i]);
    }
};
