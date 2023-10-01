class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l_sum = 0;
        int r_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            l_sum = accumulate(nums.begin(), nums.begin() + i, 0);  
            r_sum = accumulate(nums.begin() + i + 1, nums.end(), 0);  
            if (l_sum == r_sum) {
            return i;
            }
        }
        return -1;
    }
};