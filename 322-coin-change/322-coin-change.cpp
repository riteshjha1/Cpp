/*Memoization
To reduce time we will just use an 2D array to store our result. Since we are solving our problem recursively you can store the value you got for certain {amount,n} and store it and use it for next time. implementation is:
*/
class Solution {
public:
    int help(vector<int>& coins, int amount, int n,vector<vector<int>>&h){
        if(amount == 0) return 0;
        if(n < 0 || amount < 0) return INT_MAX-1;
        if(h[n][amount]!= -1) return h[n][amount];
        int one = help(coins,amount,n-1,h);
        int two = 1+help(coins,amount-coins[n],n,h);
        h[n][amount] = min(one,two);
        return h[n][amount];
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>h(coins.size()+1,vector<int>(amount+1,-1));
        int ans = help(coins,amount,coins.size()-1,h);
        return (ans < INT_MAX-1)?ans:-1;
    }
};