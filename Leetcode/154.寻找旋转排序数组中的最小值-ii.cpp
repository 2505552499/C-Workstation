/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while(l < r){
            int m = 1 + (r - 1) / 2;
            if(nums[m] > nums[r]){
                l = m + 1;
            }else if(nums[m] < nums[r]){
                r = m;
            }else{
                r--;
            }
        }
        return nums[l];
    }
};
// @lc code=end

