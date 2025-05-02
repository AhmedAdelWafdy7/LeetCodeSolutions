class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        int minLen = INT_MAX;
        int minStart = 0;
        int l = 0, r = 0, covered = t.length();
        std::unordered_map<char, int> freq;
        std::unordered_map<char, int> target;

        if (t.empty() || t.length() > s.length()) {
            return "";
        }

        for (auto it : t) {
            target[it]++;
        }

        while (r < s.length()) {
            freq[s[r]]++;
            
            if (target[s[r]] > 0 && freq[s[r]] <= target[s[r]]) {
                covered--;
            }
            
            r++;
            
            while (covered == 0) {
                if (r - l < minLen) {
                    minLen = r - l;
                    minStart = l;
                }
                
                if (target[s[l]] > 0 && freq[s[l]] <= target[s[l]]) {
                    covered++;
                }
                freq[s[l]]--;
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};