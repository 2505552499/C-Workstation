/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> opens;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') opens.push(i);
            else if(opens.size()){
                s[opens.top()] = s[i] = '*';
                opens.pop();
            }
        }
        int curr = 0, res =0;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == '*') cur++;
            else{
                res = max(res, curr);
                curr = 0;
            }
        }
        return max(curr, res);
    }
};
// @lc code=end

