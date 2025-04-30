class Solution {
public:
    int characterReplacement(std::string s, int k) {
        int maxSub{0};
        int l{0},r{0};
        int maxFreq{0};
        std::unordered_map<char,int> freq; 
        for(int r = 0; r < s.length(); r++){
            freq[s[r]]++;
            maxFreq = std::max(maxFreq, freq[s[r]]);
            int replacments = (r - l + 1 ) - maxFreq;

            if(replacments > k){
                freq[s[l]]--,l++;
            }

            maxSub = std::max(maxSub , r-l+1);
        }
        
        return maxSub;
    }
};