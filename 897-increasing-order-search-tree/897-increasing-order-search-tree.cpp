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
    TreeNode* head = new TreeNode();
    TreeNode* it=head;
    
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        
        // go to the extreme left
        inorder(root->left);
        
        // store that extreme left into the right of the new tree
        it->right = new TreeNode(root->val);
        
        // update the itr by itr->right
        it=it->right;
        
        // check the right if there is
        inorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return head->right;
    }
    
};