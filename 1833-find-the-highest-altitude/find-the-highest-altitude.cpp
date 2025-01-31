class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int len = gain.size();
     int alt = 0;
     int high = 0;
     for(int i =0; i<len ;i++){
        alt += gain[i];
        if(alt>high){
            high = alt;
        }
     }
     return high;
    }
};