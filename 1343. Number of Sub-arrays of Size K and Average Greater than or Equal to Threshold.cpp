class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int result = 0, sub = 0; 
        int i = 0, j = 0; 
        int n = arr.size(); 
        while (j < n) {
            sub += arr[j];
            j++;
            if (j - i == k) {
            
            int avg = sub / k;
            
            if (avg >= threshold) {
            
                result++;
            }
            // Subtract first element from sub
            sub -= arr[i];
            // Increment start pointer
            i++;
            }
        }
        return result;
    }

};