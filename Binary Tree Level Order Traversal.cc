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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int>> result;
        levelOrderVal(root, 0, result);
        return result;
    }
    
    
    void levelOrderVal(TreeNode *root, int level, vector<vector<int>> &t) {
        
        if (!root) {
            return;
        }
        
        int len = t.size();
        if (level >= len) {
            t.resize(level+1);
        }
        t[level].push_back(root->val);
        
        if (root->left) {
            levelOrderVal(root->left, level+1, t);
        }
        
        if (root->right) {
            levelOrderVal(root->right, level+1, t);
        }
                
    }
};
