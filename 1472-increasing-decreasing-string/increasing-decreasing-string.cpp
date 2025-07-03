class Solution {
public:
    string sortString(string s) {
        string order;
        int idx = 1;

        vector<int> freq(26);
        for(int i=0; i<s.size(); i++){
            freq[s[i] - 'a']++;
        }

        while(s.size() != order.size()){
            if(idx%2 != 0){
                for(int i=0; i<freq.size(); i++){
                    if(freq[i]){
                        order.push_back(i +'a');
                        freq[i]--;
                    }
                }
            }
            else{
                for(int i=25; i>=0 ; i--){
                    if(freq[i]){
                        order.push_back(i + 'a');
                        freq[i]--;
                    }
                }
            }
            idx++;
        }

        return order;
    }
};