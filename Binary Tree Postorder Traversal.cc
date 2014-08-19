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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> values;
        
        if (!root) {
            return values;
        }
        
        if (root->left) {
            vector<int> temp = postorderTraversal(root->left);
            int len = temp.size();
            for (int i = 0; i < len; i++) {
                values.push_back(temp[i]);
            }
        }
        
        if (root->right) {
            vector<int> temp = postorderTraversal(root->right);
            int len = temp.size();
            for (int i = 0; i < len; i++) {
                values.push_back(temp[i]);
            }
        }
        
        values.push_back(root->val);
        
        return values;
    }
};
