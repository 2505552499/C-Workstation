/*
 * @lc app=leetcode.cn id=334 lang=cpp
 *
 * [334] 递增的三元子序列
 */

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int i,n = a.size(),one = INT_MAX,two = INT_MAX;
        if(n < 3)
            return false;
        for(i = 0; i < n; i++){
            if(a[i] <= one)
                one = a[i];
            else if(a[i] <= two)
                two = a[i];
            else return true;
        }
        return false;
    }
};
// @lc code=end

