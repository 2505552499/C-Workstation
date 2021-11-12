/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution
{
public:
    int countSegments(string s)
    {
        int len = s.size();
        int count = 0;
        int l = 0, r = 0;
        if(len == 1) return s[0] == ' ' ? 0 : 1;
        while (l < len && r < len)
        {
            if (s[l] == ' ')
                l++;
            else
            {
                r = max(r + 1 , l);
                if (s[r] == ' ' || r == len - 1)
                {
                    l = r;
                    count++;
                }
            }
        }
        return count;
    }
};
// @lc code=end
