class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i =0 ; i< n-2;++i){
             if (i > 0 && nums[i] == nums[i - 1]) {
            continue;  // Skip duplicates
            }
            int l = i + 1;
            int r = n - 1;
            while(l < r){
                int total = nums[i] + nums [l] + nums[r];
                
                if(total < 0){
                    ++l;
                }else if(total > 0){
                    r--;
                }else{
                    
                    result.push_back({nums[i], nums[l], nums[r]});
                
                while (l < r && nums[l] == nums[l + 1]) {
                    ++l;  
                }
                while (l < r && nums[r] == nums[r - 1]) {
                    --r;
                }
                
                ++l;
                --r;
                    
                }
            }
        }
        return result;
    }
};