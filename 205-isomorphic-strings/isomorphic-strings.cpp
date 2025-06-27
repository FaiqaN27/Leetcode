class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char sArr[256] = {0};
        char tArr[256] = {0};
        for(int i=0; i<s.size(); i++){
            char sChar = s[i];
            char tChar = t[i];
            if(sArr[sChar] != tArr[tChar]) return false;

            sArr[sChar] = i+1;
            tArr[tChar] = i+1;
        }

        return true;
    }
};