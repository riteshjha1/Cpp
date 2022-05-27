class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1)
            return x;
        if (x < 0)
            return INT_MAX;
        int low = 0, high = x, res;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid <= (x / mid)) {
                res = mid;
                low = mid + 1;
            } 
            else 
                high = mid - 1;
        }
        return res;
    }
};