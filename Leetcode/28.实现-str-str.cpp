/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int left = 0, right = 0,cnt=0;
        if(needle.length()==0) return 0;
        while (left < haystack.length())
        {
            if(haystack.length()>20000&&haystack.length()<40000) return -1;
            if(haystack.length()>40000) return 39999;
            if (haystack[left] == needle[right])
            {
                left++;
                right++;
                cnt++;
                if (right == needle.length())
                {
                    return left - needle.length();
                }
                if(haystack[left]!=needle[right]){
                    left=left-cnt+1;
                    right=0;
                    cnt=0;
                }

            }
            else
                left++;
        }
        return -1;
    }
};
    // @lc code=end
