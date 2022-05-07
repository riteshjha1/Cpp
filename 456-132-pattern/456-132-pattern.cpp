class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int s3 = INT_MIN;
       int n = nums.size();
        stack<int>s;
        for(int i = n-1;i>=0;i--){
            if(nums[i]<s3)
                return 1;
            else{
                while(!s.empty() && nums[i]>s.top()){
                    s3 = s.top();
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return 0;
    }
};