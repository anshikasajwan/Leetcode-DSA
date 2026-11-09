class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen=strs[0].length();
        for (int i=0;i<strs.size()-1;i++){
            string first=strs[i];
            string second=strs[i+1];
            int j=0;
            int mini=min(strs[i].length(),strs[i+1].length())  ;
            while(j<mini){
                if((strs[i][j]) != (strs[i+1][j])){
                    break;
                }
                j++;
            }
            minLen=min(minLen,j);
        }
        return strs[0].substr(0, minLen);
 
    }
};