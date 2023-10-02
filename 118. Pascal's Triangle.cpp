class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i = 0; i < numRows; i++){
            vector<int> triangle;
           triangle.resize(i + 1);
            for(int j = 1; j < i; j++){
            int current = result[i-1].at(j-1) + result[i-1].at(j);
            triangle[j] = current;
            }
            triangle[0] = 1;
            triangle[i] = 1;
            result[i] = triangle;
        }
        return result; 
    }
};