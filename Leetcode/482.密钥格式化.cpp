/*
 * @lc app=leetcode.cn id=482 lang=cpp
 *
 * [482] 密钥格式化
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res;
        for(auto i = s.rbegin();i<s.rend();i++){
            if(*i != '-'){
                if(res.size()%(k+1)==k) res += '-';
                res += toupper(*i);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
// @lc code=end

