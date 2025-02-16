class Solution {
public:
    bool buddyStrings(string s, string goal) {
     if(s.size() != goal.size()) return false;

     if(s == goal){
        unordered_set<char> st(s.begin() , s.end());
        return st.size() < s.size();
     }

     vector<int>arr;
     for(int i =0; i<s.size() ; i++){
        if(s[i] != goal[i]){
            arr.push_back(i);
        }
     }

     if(arr.size() != 2) return false;

     int i = arr[0] , j = arr[1];
     return (s[i] == goal[j] && s[j] == goal[i]);
    }
}; 