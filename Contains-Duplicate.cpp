class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, int> freqMap;
        for (const auto & it:nums){
            freqMap[it]++;
            if(freqMap[it] > 1)
                return true;
        }
        return false;
    }
};