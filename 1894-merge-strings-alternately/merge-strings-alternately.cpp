class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string combo = "";
        int maximum = max(word1.size(),word2.size());
        for(int i =0 ; i<maximum ; i++){
            if(i<word1.size()){
                combo+= word1[i];
            }
            if(i<word2.size()){
                combo += word2[i];
            }
        }
        return combo;
    }
};