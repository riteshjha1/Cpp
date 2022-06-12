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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    //when bst is empty make a node and return it
    if(root==NULL){
        TreeNode* first=new TreeNode(val);
        return first;
    }

    // attach the val to either left or right as per its position
    if(val<root->val){
        root->left=insertIntoBST(root->left,val);
    }
    if(val>root->val){
        root->right=insertIntoBST(root->right,val);
    }
    //return Node with left or right child in form of node
    return root;
}
};