class Solution {
public:
    bool isPerfectSquare(int num) {
        int helper=1;
        while(num>0){
            num=num-helper;
            helper=helper+2;
        }
        return num==0;
    }
};