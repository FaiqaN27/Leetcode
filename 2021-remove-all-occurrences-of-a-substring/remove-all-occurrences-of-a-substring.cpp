class Solution {
public:
    string removeOccurrences(string s, string part) {
        int ptr = part.size();
        string st= "";

        for(char ch : s){
            st.push_back(ch);

            if( st.size() >= ptr && st.substr(st.size() - ptr) == part){
                    st.erase(st.size() - ptr);
                }
            }
            return st;
    }
};