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
    bool isBalanced(TreeNode* root) {
        if(depth(root) == -1){
            return false;
        }
        return true;
    }
    int depth(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int ldepth = depth(root -> left);
        int rdepth = depth(root -> right);
        if(abs(ldepth - rdepth) > 1 || ldepth == -1 || rdepth == -1){
            return -1;
        }
        return max(ldepth, rdepth) + 1;
    }
};