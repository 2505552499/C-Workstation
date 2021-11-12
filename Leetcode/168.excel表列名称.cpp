/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(n>0){
            res = char('A' + (n -1 )%26) + res;
            n = (n - 1) / 26;
        }
        return res;
    }
    
};
// @lc code=end

