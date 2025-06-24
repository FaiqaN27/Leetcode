class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string combo = "";
        int left = 0;
        int right = 0;
        while(left<w1.size() && right<w2.size()){
            combo.push_back(w1[left]);
            combo.push_back(w2[right]);
            left++;
            right++;
        }

        while(left<w1.size()){
            combo.push_back(w1[left]);
            left++;
        }

        while(right<w2.size()){
            combo.push_back(w2[right]);
            right++;
        }

        return combo;
    }
};