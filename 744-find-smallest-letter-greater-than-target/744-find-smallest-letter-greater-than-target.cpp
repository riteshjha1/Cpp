class Solution {
public:
	// This helper does binary search to find floor value of the given char for instance {97, 99, 102 , 106} key = 100 will return 99 in other words {'a','c','f','j' }, key = 'd' former array is just ascii versions of the chars array. 
    int helper(vector<char>& A, char key){
        int l=0, r= A.size();
        int m;
        while(l+1<r){
            m = l + (r-l)/2;
            if(A[m]<=key)
                l = m;
            else
                r= m;
        }
        return l;
    }
    char nextGreatestLetter(vector<char>& A, char key) {
        if(key< A[0]) // check if key is even smaller than the first elem of the array in which case we'll return the first elem
            return A[0];
        int res = helper(A,key); 
        return res < A.size()-1 ? A[res+1] :  A[0];
             
    }
};