class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            unordered_map<int, int> freq;
                for (int num : nums) {
                    freq[num]++;
                }
                for (auto [num, count] : freq) {
                    if(num == val){
                        nums.erase(remove(nums.begin(), nums.end(), num), nums.end());
                        
                    }
                    }
        return nums.size();    
    }
};