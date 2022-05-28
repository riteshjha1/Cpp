class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0;
        int n = nums.size();
        total = (n*(n+1))/2;
        for( auto x : nums)
            total-=x;
        return total;
        
    }
};