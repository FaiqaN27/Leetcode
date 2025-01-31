class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stS;
        stack<char> stT;

        for(char ch : s){
            if(ch == '#'){
             if(!stS.empty()){
                stS.pop();
            }   
            }
            else{
            stS.push(ch);
            }
        }
        
        for(char ch : t){
            if(ch == '#'){
              if(!stT.empty()){
                stT.pop();
            }   
            }
           else{
            stT.push(ch);
           }
        }

        return stS == stT;
    }
};