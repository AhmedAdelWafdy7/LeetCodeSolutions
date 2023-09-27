class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0; 
        int n = height.size();
        int l = 0;
        int r = n - 1; 
        while(l < r){ // loop until l >= r
            int area = (r - l) * min(height[l], height[r]);
            result = max(result, area); // update result
            if (height[l] < height[r]) { // move the smaller pointer
                l++;
            } else {
                r--;
            }
        }
        return result;
    }
};