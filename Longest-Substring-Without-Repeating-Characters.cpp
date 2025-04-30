class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int maxLen{0},len{0},l{0},r{0},maxFreq{0};
        std::unordered_map<char,int>  freq;
        if (s.empty()) return 0;
        while(r < s.length()){
            freq[s[r]]++;
            
            while(freq[s[r]] > 1){

                freq[s[l]]--;
                l++;
            }
            
            len = r - l +1;
            maxLen = std::max(maxLen,len);
            r++;
        }
        return maxLen;
    }
};