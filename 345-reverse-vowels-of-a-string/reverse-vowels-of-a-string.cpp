class Solution {
public:

bool isVowel(char ch){
    return ch == 'A' || ch== 'E' || ch=='I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
    string reverseVowels(string s) {
        int left = 0;
        int right =s.size() -1;
        while(left<right){
            if(!isVowel(s[left])) left++;
            else if(!isVowel(s[right])) right--;
            else{
                char t = s[left];
                s[left] = s[right];
                s[right] = t;
                left++;
                right--;
            }
        }
        return s;
    }
};