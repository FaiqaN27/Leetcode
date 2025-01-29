class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n= candies.size();
        vector<bool> arr;
        int maxCandy = *max_element(candies.begin() , candies.end());
        for(int i =0 ; i<n ;i++){
           arr.push_back(candies[i]+extraCandies >= maxCandy);
        }
        return arr;
    }
}; 