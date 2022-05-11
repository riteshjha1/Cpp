/*Algorthem:

initialize left pointer to 0 and right pointer to 1
if height of right >= height of left
check the water contained in between
let left and right to its new poistion
else
increase right by one
finally if these is open end
e.g. [4, 0, 3]
check the water backward in between.
*/    

class Solution {
public:
    int trap(vector<int>& height) {
        // Two Pointer
        int left = 0;
        int right = 1;
        int ans = 0;
        while (right < height.size()) {
            // right height >= left height, check water in between
            if (height[right] >= height[left]) {
                for (int i = left + 1; i < right; ++i) {
                    ans += (height[left] - height[i]);
                }
                left = right;
                ++right;
            } else {
                ++right;
            }
            
        }
        // finally, when there is a open end, check from back.
        if (left != right + 1) { 
            int l = height.size() - 2;
            int r = l + 1;
            while ( l >= left) {
                if (height[l] >= height[r]) {
                    for (int i = r - 1; i > l; --i) {
                        ans += (height[r] - height[i]);
                    }
                    r = l;
                    --l;
                } else {
                    --l;
                }
            }
        }
        
        return ans;
    }
};