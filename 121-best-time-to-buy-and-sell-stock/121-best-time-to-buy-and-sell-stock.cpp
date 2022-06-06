class Solution {
public:
    int maxProfit(vector<int>& prices) {
 
    int maxi = 0;
    int maxProfit = 0;

    for(int i=prices.size()-1; i>=0; i--){
        maxi = max(maxi, prices[i]);
        maxProfit = max(maxProfit, maxi-prices[i]);
    }
    return maxProfit;

        
    }
};