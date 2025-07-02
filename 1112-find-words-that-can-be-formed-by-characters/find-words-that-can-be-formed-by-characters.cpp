class Solution {
public:

    bool isGoodString(string word , unordered_map<char,int> mp){
        for(int i=0; i<word.size(); i++){
            if(mp[word[i]] > 0){
                mp[word[i]]--;
            }
            else return false;
        }
        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        int count = 0;

        for(int i=0; i<chars.size(); i++){
            mp[chars[i]]++;
        }

        for(int i=0; i<words.size(); i++){
            if(isGoodString(words[i], mp)){
                count+=words[i].size();
            }
        }

        return count;
    }
};