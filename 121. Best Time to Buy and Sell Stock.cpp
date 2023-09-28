class Solution {
public:
    int maxProfit(vector<int>& prices) {
            if (prices.empty()) {
            return 0;
            }
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            }
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }
        
        return maxProfit;
    }
};