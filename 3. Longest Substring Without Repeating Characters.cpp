class Solution {
public:
   int lengthOfLongestSubstring(string s) {
        int counter = 0;
        int start = 0;
        int end = 0; 
        unordered_set<char> seen;
        while (end < s.length()) {
            char c = s[end];
            if (seen.count(c) == 0) { 
                seen.insert(c);
                counter = max(counter, end - start + 1); 
                end++; 
            } else {
                seen.erase(s[start]); 
                start++; 
            }
        }
        return counter; 
    }
};