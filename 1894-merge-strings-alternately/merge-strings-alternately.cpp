class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string combo = "";
        int i = 0;
        int j = 0;
        while(i<w1.size() || j<w2.size()){
        
        if(i<w1.size()){
            combo.push_back(w1[i]);
		    i++;
        }
        
        if(j<w2.size()){
			combo.push_back(w2[j]);
            j++;
        }
      }
        return combo;
    }
};