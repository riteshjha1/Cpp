class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxpq;
        for(int i=0;i<nums.size();i++){
            maxpq.push(nums[i]);
        }
        for(int i=0;i<k-1;i++){
            maxpq.pop();
        }
        return maxpq.top();
    }
};