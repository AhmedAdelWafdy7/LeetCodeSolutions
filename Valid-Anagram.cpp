class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char,int> sfreq,tfreq;
        for(const auto & it: s){
            sfreq[it]++;
        }
        for(const auto & it: t){
            tfreq[it]++;
        }
        return sfreq == tfreq;
    }
};