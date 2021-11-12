/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        int temp,cnt=0;
        for(int i=len-1;i>=0;i--){
            if(nums[i]==val&&i==len-1){
                len--;
                cnt++;
                continue;
            }
            if(nums[i]==val){
                temp=nums[i];
                nums[i]=nums[len-1];
                nums[len-1]=temp;
                len--;
                cnt++;
            }
        }
    return nums.size()-cnt;
    }
};
// @lc code=end

