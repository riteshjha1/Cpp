class Solution {
    public:
        int findMin(vector<int> &nums){
            int low=0;
            int high=nums.size()-1;
            int ans;
            while(low<high){
                int mid=low+(high-low)/2;
                if(nums[mid]>=nums[high]){          // to check weather we have rotated or not
                    ans=low;
                    low=mid+1; 
                }
                else
                    high=mid;
            }
    return nums[low];
    }
};