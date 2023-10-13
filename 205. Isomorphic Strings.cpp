class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map <char,char> mapping;
        map <char,char> reverse;
        for(int i = 0; i<s.length();i++){
            if(mapping.count(s[i]) && mapping[s[i]] != t[i]){
                return false;
            }
            if(reverse.count(t[i]) && reverse[t[i]] != s[i]){
                return false;
            }
            mapping[s[i]] = t[i];
            reverse[t[i]] = s[i];
        }    
        return true;
    }
};