/*Tabulation
In fact for this que we can do 2D Tabulation and 1D tabulation Both, But I will talk about 1D tabulation only Here. Now According to our name suggestion we are using an 1D array. We will set every element to infinity and one by one check from coins array that if we can use this coin to get result or not and take min of thos values and store it. we will focus on these 3 lines from our recursion

int one = help(coins,amount,n-1);
int two = 1+help(coins,amount-coins[n],n);
return min(one,two);
Now here is implementation:

Why Tabulation is better than Memoization?
Although auxillary time complexity is same we see real time time complexity of memoization will be higher.
As for space: cleary tabulation is a Better option
*/
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>h((amount+1), INT_MAX-1);
        h[0] = 0;
        for(int i = 0; i < h.size(); i++){
            for(int j = 0; j < coins.size(); j++){
                if(i >= coins[j]) h[i] = min(h[i], 1 + h[i-coins[j]]);
            }
        }
        return (h[h.size()-1] < INT_MAX - 1)?h[h.size()-1]:-1; 
    }
};