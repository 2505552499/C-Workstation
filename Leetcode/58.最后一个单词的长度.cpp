/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count =0;
        while(s[n-1]==' '){
            s.erase(n-1);
            n--;
        }
        int len = s.size();
        for(int i = len-1;i>=00&&s[i]!= ' ';i--)
            count++;
        return count;
    }

};
// @lc code=end

