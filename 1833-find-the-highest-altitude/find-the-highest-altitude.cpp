class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int n = gain.size();
     int alt = 0;
     int high = 0;
     for(int i =0; i<n ;i++){
        alt += gain[i];
        if(alt>high){
            high = alt;
        }
     }
     return high;
    }
};