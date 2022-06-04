//Binary Search

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size(), ans=0;
        for(int i=0; i<n; i++) {
            int lo=i, hi=m-1, mid; 
            while(hi-lo>1) {
                mid=lo+((hi-lo)>>1);
                if(nums2[mid]>=nums1[i])
                    lo=mid;
                else 
                    hi=mid-1;
            } 
			if(nums2[hi]>=nums1[i]) 
                mid=hi; 
			else 
                mid=lo;
            ans = max(ans, mid-i);
        } 
		return ans;
    }
};