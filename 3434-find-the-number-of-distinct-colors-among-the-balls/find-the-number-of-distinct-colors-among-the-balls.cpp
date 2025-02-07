class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n= queries.size();
        vector<int>res(n);
        unordered_map<int,int> cm , bm;

        for(int i= 0 ; i< n; i++){
            int ball = queries[i][0] , color = queries[i][1];

            if(bm.find(ball) != bm.end()){
                int prevColor = bm[ball];
                cm[prevColor]--;

                if(cm[prevColor] == 0) cm.erase(prevColor);
            }
            bm[ball] = color;
            cm[color]++;
            res[i] = cm.size();
            }
            
            return res;
        
    }
};