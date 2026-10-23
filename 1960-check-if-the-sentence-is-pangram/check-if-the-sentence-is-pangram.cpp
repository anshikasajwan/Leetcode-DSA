class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> count(26, 0);
        for(int i=0;i<sentence.size();i++){
            count[sentence[i]-'a']++;
        }
        for(int i=0;i<count.size();i++){
            if(count[i]<1){ 
                return false;
            }
        }
        return true;
    }
};