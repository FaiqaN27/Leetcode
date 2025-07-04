class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26,false);
        int count = 0 ;

        for(int i=0; i<sentence.size(); i++){
            int idx = sentence[i] - 'a';
            if(!seen[idx]){
                seen[idx] = true;
                count++;
            }
            if(count == 26) return true;
        }

        return false;
    }
};