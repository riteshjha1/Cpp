// using stack solution

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> stk, stk_2;
        int l = height[0], trapped = 0;
        stk.push(height[0]);
        
        for (int i=1; i<height.size(); i++) {
            if (height[i]>=l) {
                while (stk.top() != l) {
                    trapped += (l-stk.top());
                    stk.pop();
                }
                stk.pop();
                stk.push(height[i]);
                l = height[i];
            }
            else {
                stk.push(height[i]);
            }
        }     
        
        if (!stk.empty()) {
            
            l = stk.top();
            stk.pop();
            stk_2.push(l);
            
            while (!stk.empty()) {
                int top = stk.top();
                stk.pop();

                if (top>=l) {
                    while (stk_2.top() != l) {
                        trapped += (l-stk_2.top());
                        stk_2.pop();
                    }
                    stk_2.pop();
                    stk_2.push(top);
                    l = top;
                }
                else {
                    stk_2.push(top);
                }
            }            
        }
        
        return trapped;
    }
};