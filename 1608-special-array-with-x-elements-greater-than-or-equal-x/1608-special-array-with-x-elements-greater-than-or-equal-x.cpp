class Solution {
public:
    int specialArray(vector<int>& nums) {
        // since there're nums.size() elements in `nums`, the maximum possible value of X is nums.size()
        int l = 0, r = nums.size();
        while (l <= r) {
            int m = l + (r - l) / 2;
            
            if (count(nums, m) == m) 
                return m;
            
            if (count(nums, m) > m) 
                l = m + 1;
             else 
                r = m - 1;
        }
        return -1;
    }
private:
    // count the # of elements in `nums` that are greater/equal to m 
    int count(const vector<int> &nums, int m){
        int res = 0;
        for (auto num : nums) {
            if (num >= m) 
                res++;
        }
        return res;
    }
};