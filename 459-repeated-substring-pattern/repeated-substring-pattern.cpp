class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s+s;
        int n= doubled.size();
        return doubled.substr(1, n-2).find(s) != string::npos;
    }
};