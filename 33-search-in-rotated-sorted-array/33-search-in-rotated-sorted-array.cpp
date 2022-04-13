class Solution {
public:
	int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        //1.
        while(low<high) {
            int mid = (low+high)/2;
            if(nums[mid] > nums[high]) 
                low = mid+1;
            else 
                high = mid;
        }
        //2.
        if(target>= nums[low] && target <= nums[n-1]) 
            high = n-1;
        else if(target>nums[n-1]){ 
            high = max(0, low-1); 
            low = 0;
        }
        //3.
        while(low<=high) {
            int mid = (low+high)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target) 
                low = mid+1;
            else 
                high = mid-1;
        }
        return -1;
    }
};