class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int maxProfit = 0;
        for(int i=0; i<prices.size(); i++){
            minimum = min(prices[i], minimum);
            maxProfit = max(maxProfit, prices[i]-minimum);
        }
        return maxProfit;
        
    }
};