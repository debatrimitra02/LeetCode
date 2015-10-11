/*
Invert/ Mirror  a binary tree.

     4
   /   \
  2     7
 / \   / \
1   3 6   9
to
     4
   /   \
  7     2
 / \   / \
9   6 3   1
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==NULL)
            return root;
        TreeNode *temp;
        invertTree(root->left);
        invertTree(root->right);
        
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
};
