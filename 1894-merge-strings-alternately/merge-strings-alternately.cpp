class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string combo = "";
        int maximum = max(w1.size(),w2.size());
        for(int i =0 ; i<maximum ; i++){
            if(i<w1.size()){
                combo+= w1[i];
            }
            if(i<w2.size()){
                combo += w2[i];
            }
        }
        return combo;
    }
};