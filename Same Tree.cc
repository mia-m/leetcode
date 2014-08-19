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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        vector<int> p_values;
        vector<int> q_values;
        int p_level = 1;
        int p_level_left = 0;
        int p_level_right = 0;
        int q_level = 1;
        int q_level_left = 0;
        int q_level_right = 0;
        
        p_values = preorderTraversal(p, p_level, p_level_left, p_level_right);
        q_values = preorderTraversal(q, q_level, q_level_left, q_level_right);
        
        int p_len = p_values.size();
        int q_len = q_values.size();
        
        if (p_len != q_len) {
            return false;
        } else {
            for (int i = 0; i < p_len; i++) {
                if (p_values[i] != q_values[i]) {
                    return false;
                }
            }
        }
        return true;
    }
    
    vector<int> preorderTraversal(TreeNode *root, int level, int level_left, int level_right) {
        vector<int> tree_info;
        
        if (!root) {
            return tree_info;
        }
        
        tree_info.push_back(root->val);
        
        if (root->left) {
            vector<int> temp;
            temp = preorderTraversal(root->left, level+1, level_left+1, level_right);
            int len = temp.size();
            for (int i = 0; i < len; i++) {
                tree_info.push_back(temp[i]);
            }
        }
        
        if (root->right) {
            vector<int> temp;
            temp = preorderTraversal(root->right, level+1, level_left, level_right+1);
            int len = temp.size();
            for (int i = 0; i < len; i++) {
                tree_info.push_back(temp[i]);
            }
        }
        
        // add the level information in the return value
        tree_info.push_back(level);
        tree_info.push_back(level_left);
        tree_info.push_back(level_right);
        
        return tree_info;
    }
};
