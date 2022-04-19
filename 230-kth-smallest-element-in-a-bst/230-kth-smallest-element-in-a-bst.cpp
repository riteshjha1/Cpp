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

/*
Approach :
Inorder traversal of BST print the element in increasing order so that kth smallest element in BST is the kth item in inorder traversal

Recursive
Time complexcity O(H+K) H is height of bst
Space complexcity O(1)
hence we are not using any extra space but for the recursion calls space is allocated and that would be in order of O(H+K) (Recursion stack space)
*/
class Solution {
public:
   int kthSmallest(TreeNode* root, int &k) {
        if(root==NULL) 
            return -1;
        
        int left = kthSmallest(root->left,k);          // left recursive call
        
        if(left!=-1) 
            return left;                      // if we get answer from left call than return it
        k--;
        if(k==0) 
            return root->val;                 // this is kth smallest element
         
        int right = kthSmallest(root->right,k);     // right recursive call
        
        if(right!=-1)
            return right;                   // if we get answert from right call than return it
        
        return -1;                                 // return -1 if we not get answer from this call
    }
};



