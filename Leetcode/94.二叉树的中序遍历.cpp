/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
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
// // 解法一 辅助栈
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> nodes;
//         stack<TreeNode*> todo;
//         while(root || !todo.empty()){
//             while(root){
//                 todo.push(root);
//                 root = root->left;
//             }
//             root = todo.top();
//             todo.pop();
//             nodes.push_back(root->val);
//             root = root->right;
//         }
//         return nodes;
//     }
class Solution{
public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> nodes;
        inorder(root,nodes);
        return nodes;
    }
private:
    void inorder(TreeNode* root,vector<int> &nodes){
        if(!root){
            return;
        }
        inorder(root->left,nodes);
        nodes.push_back(root->val);
        inorder(root->right,nodes);
    }
};
    
// };
// @lc code=end

