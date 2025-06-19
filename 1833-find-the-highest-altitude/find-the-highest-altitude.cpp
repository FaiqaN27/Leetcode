class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int maxGain = 0;
        for(int i=0; i<gain.size() ; i++){
            maxGain += gain[i];
            if(maxAlt<maxGain) maxAlt = maxGain;
        }
        return maxAlt;
    }
};