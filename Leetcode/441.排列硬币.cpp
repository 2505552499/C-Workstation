/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        // 法一：公式法遍历
        // long k = 0;
        // for(;(k-1)*k/2 < n;k++){
        //     if((1+k)*k/2 >= n && (k-1)*k/2 < n ){
        //         if((1+k)*k/2 == n) return k;
        //         else return k-1;
        //     }
        // }
        // return 0;

        // 法二：
        // int i = 0;
        // for(; n >= 0; n-=++i);
        // return i-1;

        // 法三：
        return -0.5 + sqrt(2.0*n + 0.25);
    }
    
};
// @lc code=end

