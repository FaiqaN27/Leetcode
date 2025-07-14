class Solution {
public:
    bool backspaceCompare(string s, string t){
        string sStr , tStr;
        for(char ch:s){
            if(ch=='#' && !sStr.empty()){
                sStr.pop_back();
            }
            else{
                if(ch != '#'){
                    sStr.push_back(ch);
                }
            }
                
        }

        for(char ch:t){
            if(ch=='#' && !tStr.empty()){
                tStr.pop_back();
            }
            else{
                if(ch != '#'){
                    tStr.push_back(ch);
                }
            }
                
        }

        return sStr == tStr;
    }
};