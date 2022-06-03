class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int sum=0;
          long long  int i=0;
            long long int j=sqrt(c);
        while(i<=j){
            sum=(i*i)+(j*j);
            if(sum==c)
                return true;
            if(sum<c)
                i++;
            else
                j--;
        }
            return false; 
        }
    
};