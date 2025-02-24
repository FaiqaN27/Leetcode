class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    vector<int>ch;

    for(int i=0; i < s2.size(); i++){
        if(s1[i] != s2[i]){
            ch.push_back(i);
        }
    }

    if(ch.empty()) return true;
    else if(ch.size() != 2) return false;

    int i = ch[0] , j =ch[1];
    return s1[i] == s2[j] && s1[j] == s2[i];
    }
};