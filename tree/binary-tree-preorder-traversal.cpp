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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        unordered_map<TreeNode*, bool> map;
        stack<TreeNode*> stack;
        while(root != nullptr || !stack.empty()){
            while(root != nullptr && !map[root]){
                ans.push_back(root -> val);
                map[root] = true;
                stack.push(root);
                root = root -> left;
            }
            root = stack.top();
            stack.pop();
            root = root -> right;
        }
        return ans;
    }
};