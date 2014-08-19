/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
public:
    int maxDepth(TreeNode *root) {
        return (postorderTraversal(root, 1));
    }
    
    int postorderTraversal(TreeNode *root, int level) {
        
        if (!root) {
            return 0;
        }
        
        int max_left = level;
        if (root->left) {
            max_left = postorderTraversal(root->left, level+1);
        } 
        
        int max_right = level;
        if (root->right) {
            max_right = postorderTraversal(root->right, level+1);
        } 
        
        return (max(max_left, max_right));
    }
};
