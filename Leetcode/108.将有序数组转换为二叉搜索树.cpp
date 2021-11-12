/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums,0,nums.size());
    }
private:
    TreeNode* sortedArrayToBST(vector<int>& nums,int start, int end){
        if(end<= start) return NULL;
        int minIdx = (end+start)/2;
        TreeNode* root = new TreeNode(nums[minIdx]);
        root->left = sortedArrayToBST(nums,start,minIdx);
        root->right = sortedArrayToBST(nums,minIdx+1,end);
        return root;
    }
};
// @lc code=end

