class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];
        if(strs.empty())
            return "";
        for(int i = 1;i< strs.size();i++){
            int j = 0;
            while(j < result.length() && j < strs[i].length()){
                if(result[j] != strs[i][j]){
                    break;
                }
                j++;
            }
            result = result.substr(0,j);
            if(result == "")
                return "";
        }
        return result;
    }
};