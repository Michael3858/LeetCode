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
    bool isValidBST(TreeNode* root) {
        long long lower = LLONG_MIN;
        long long upper = LLONG_MAX;
        return validate(root, lower, upper);
    }
private:
    bool validate(TreeNode* node, long long lower, long long upper){
        if(node->val >= upper || node->val <= lower){
            return false;
        }
        if(node->left != nullptr && node->right != nullptr){
            return validate(node->left, lower, node->val) 
            && validate(node->right, node->val, upper);
        }
        else if(node->left != nullptr && node->right == nullptr){
            return validate(node->left, lower, node->val);
        }
        else if(node->left == nullptr && node->right != nullptr){
            return validate(node->right, node->val, upper); 
        }
        return true;
    }
};