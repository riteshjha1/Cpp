class Solution {
public:
    char nextGreatestLetter(vector<char>& letter, char t){
        int h=letter.size()-1;
        int l=0;
        while(h>=l){
            int mid=l+(h-l)/2;
            if(letter[mid]>t)
                h=mid-1;
            else
                l=mid+1;
        }
        if(l==letter.size())
            return letter[0];
        return letter[l];
    }
};