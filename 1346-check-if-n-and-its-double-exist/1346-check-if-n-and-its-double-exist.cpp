class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++) {
            int l=i+1, h = n-1;
            while(l <= h) {
                int m = l + (h-l)/2;
                if(arr[i] > 0) {
                    if(arr[m] == 2*arr[i])
                        return true;
                    else if(arr[m] < 2*arr[i])
                        l = m+1;
                    else 
                        h = m-1;
                } 
                else {
                    if(arr[m]*2 == arr[i])
                        return true;
                    else if(arr[m]*2 < arr[i])
                        l = m+1;
                    else 
                        h = m-1;
                }
            }
        }
        return false;
    }
};