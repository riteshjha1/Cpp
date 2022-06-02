class Solution {
public:
   bool checkIfExist(vector<int>& arr) {
       unordered_map<int,int> mp;
       
       for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
           if(arr[i]!=0)
           {if(arr[i]%2==0 && mp[arr[i]/2])
               return true;
           if(mp[arr[i]*2])
               return true;
           }
       }
       if(mp[0]  && mp[0]>1)
           return true;
       return false;
   }
};