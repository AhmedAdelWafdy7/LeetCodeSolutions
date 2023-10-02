class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        vector<bool> exist(n + 1, false); 
        for (int num : nums) { 
            exist[num] = true; 
        }
        for (int i = 1; i <= n; i++) { 
            if (!exist[i]) { 
            result.push_back(i); 
            }
        }
        return result;
    }
};