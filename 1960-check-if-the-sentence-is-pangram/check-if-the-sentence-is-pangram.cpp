class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26);

        for(int i=0; i<sentence.size(); i++){
            arr[sentence[i] - 'a']++;
        }

        for(int i=0 ; i<arr.size(); i++){
            if(arr[i] == 0) return false;
        }

        return true;
    }
};