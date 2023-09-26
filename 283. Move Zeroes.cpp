class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int n = nums.size();
    int nonZero = 0;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            std::swap(nums[nonZero++], nums[i]);
        }
    }
    
    std::sort(nums.begin() + nonZero, nums.end());

    }
};