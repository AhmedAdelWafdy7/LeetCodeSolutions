class Solution {
public:
    int longestPalindrome(string s) {
         int counter =0;
        
        unordered_map<char, int> freq;
            for (char ch : s) {
                freq[ch]++;
            }
            bool hasOddFrequency = false;
                for (auto [ch, count] : freq) {
                        if (count%2==0) {
                            counter += count;
                        }
                        else{
                            counter +=count -1;
                            hasOddFrequency =true;
                        }
                }
                if (hasOddFrequency) {
                    counter++;
                }
        
        return counter;
    }
};