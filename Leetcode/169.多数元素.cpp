/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counter;
        for(int num:nums){
            if(++counter[num]>nums.size()/2){
                return num;
            }
        }
        return 0;
    }
};
// @lc code=end

