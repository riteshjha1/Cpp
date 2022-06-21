class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {    
        stack<pair<int,int>> s1;
        
        int n=heights.size();
        
        //We Will Find Next Smaller element to left and right for all elements in heights vector
        
        //Nearest Smallest To Left
        vector<int> nsl(n);  //To store index to nsl
        
        for(int i=0;i<n;i++)
        {
            while(!s1.empty() && s1.top().second>=heights[i])
                s1.pop();
            
            if(s1.empty())
                nsl[i]=-1;
            else 
                nsl[i]=s1.top().first;
            
            s1.push({i,heights[i]});
        }
        
        //Nearest Smallest To Right
        stack<pair<int,int>> s2;
        
        vector<int> nsr(n);  //To store index to nsr
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s2.empty() && s2.top().second>=heights[i])
                s2.pop();
            
            if(s2.empty())
                nsr[i]=-1;
            else 
                nsr[i]=s2.top().first;
            
            s2.push({i,heights[i]});
        }
        
        
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int left,right;
            int h=heights[i];
            //Area to Left
            if(nsl[i]==-1)
                left=h*(i+1);
            else
                left=h*(i-nsl[i]);
            
            //Area to right
            if(nsr[i]==-1)
                right=h*(n-i);
            else
                right=h*(nsr[i]-i);
            
            int largestArea=left+right-h;  //Minus Beacuse it is added 2 times 
            ans=max(ans,largestArea);
        }
        return ans;
    }
};