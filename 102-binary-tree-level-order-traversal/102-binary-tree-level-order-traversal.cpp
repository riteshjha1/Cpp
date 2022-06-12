/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==0)return {};
        queue<TreeNode*> res;
        vector<vector<int>> ans;
        vector<int> level;
        res.push(root);
        while(!res.empty()){
            int len=res.size();
            for(int i=0;i<len;i++){
                TreeNode* front=res.front();
                res.pop();
                level.push_back(front->val);
                if(front->left)res.push(front->left);
                if(front->right)res.push(front->right);
            }
            ans.push_back(level);
            level.clear();
        }
        return ans;
        
        
     
    }
};