class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (*it != 0) {
                iter_swap(it, nums.begin() + i);
                i++;
            }
        }
    }
};