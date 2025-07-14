class Solution {
public:
    bool backspaceCompare(string s, string t){
        stack<char> sSt , tSt;
        for(char ch:s){
            if(ch=='#' && !sSt.empty()){
                sSt.pop();
            }
            else{
                if(ch != '#'){
                    sSt.push(ch);
                }
            }
                
        }

        for(char ch:t){
            if(ch=='#' && !tSt.empty()){
                tSt.pop();
            }
            else{
                if(ch != '#'){
                    tSt.push(ch);
                }
            }
                
        }

        return sSt == tSt;
    }
};