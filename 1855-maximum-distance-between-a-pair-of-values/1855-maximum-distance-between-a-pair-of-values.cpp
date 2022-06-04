//Two Pointers

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size(), ans=0, l=0, r=0;
        while(l<n && r<m) {
            if(nums1[l]<=nums2[r]) {
				ans=max(ans, r-l); 
				r++;
			}
            else {
				if(l>=r) 
                    l++,r++; 
				else
                    l++;
			}
        } 
		return ans;
    }
};