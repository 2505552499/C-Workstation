/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,smax = INT_MIN;
        for (int num:nums){
            sum += num;
            smax = max(smax,sum);
            if(sum< 0){
                sum = 0;
            }
        }
        return smax;
    }
};
// @lc code=end

