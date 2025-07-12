class Solution {
public:
    bool isValid(string s){
        stack <char> result ;

        for(char ch:s){
            if(ch == '(' || ch == '{' || ch == '['){
                result.push(ch);
            }
            else{
                if(result.empty() ||
                (ch == ')' && result.top() !=  '(') ||
                (ch == '}' && result.top()  !=  '{') ||
                (ch == ']' && result.top() !=  '[')
                ){
                    return false;
                }

                result.pop();
            }
        }

        return result.size() == 0;

    }
};