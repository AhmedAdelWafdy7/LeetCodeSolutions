class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
                //  empty hash set
        unordered_set<int> seen;
        
        for(int i = 0; i < nums.size(); i++){
            // check if the current element is already in the hash set
            if(seen.count(nums[i]) > 0){
                // yes, return true
                return true;
            }
            seen.insert(nums[i]);
            
            
            if(i >= k){
                seen.erase(nums[i - k]);
            }
        }
        
        return false;
    }
};