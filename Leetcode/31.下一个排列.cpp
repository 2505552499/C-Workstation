/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int len = nums.size();
        int flag = 0;
        int i = 0, j = 0;
        for (; j < len - 1; j++)
        {
            if (nums[j + 1] > nums[j])
                break;
        }
        if (j == len - 1)
        {
            sort(nums.begin(), nums.end());
        }

        else
        {
            for (i = len - 2; i > -1; i--)
            {
                for (j = len - 1; j > i; j--)
                {
                    if (nums[j] > nums[i])
                    {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            // for (int m = i + 1; m < len; m++)
            // {
            //     for(int n = m+1;n<len;n++){
            //         if(nums[n]<nums[m]){
            //             int temp = nums[n];
            //             nums[n] = nums[m];
            //             nums[m] = temp;
            //         }
            //     }
            // }
            int left = i + 1, right = len - 1;
            for (; left <= (left + right) / 2; left++, right--)
            {
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
            }
        }
    }
};

// @lc code=end
