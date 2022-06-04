class Solution {
    public:
        int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        
        while(left<right){
            int mid=left+(right-left)/2;

            if(nums[mid]>nums[right])left=mid+1;              // in this case we assure the minimum is in the right side
            else right=mid;                                  // in this case we assure the minimum is in the left side
        }
        return nums[left];
    }
};