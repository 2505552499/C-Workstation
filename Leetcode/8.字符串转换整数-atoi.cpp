/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {

        long long q = 0;
        if (s.length() == 0)
            return 0;
        for (int i = 0; i < s.length(); i++)
        {
            // if(s[i]!='+'&&s[i]!='-'&&s[i]>'9'&&s[i]<'0'&&s[i]!=' ') return 0;
            if(s[i]==' ') continue;
            if (s[i] == '+' || s[i] == '-')
            {
                int flag = 0;
                if (s[i] == '-')
                    flag = 1;
                while (s[++i] >= '0' && s[i] <= '9' && i < s.length()&&q<2147483648)
                {
                    q = q * 10 + (s[i] - '0');
                }
                if (flag == 0){
                    if(q>=__INT_MAX__) return __INT_MAX__;
                    else return q;
                }
                if(flag==1){
                    if(q>2147483648) return -2147483648;
                    else return (q - 2 * q);
                }
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                q = s[i] - '0';
                while (s[++i] >= '0' && s[i] <= '9' && i < s.length()&&q<2147483648)
                {
                    q = q * 10 + (s[i] - '0');
                    
                }
                if(q>=__INT_MAX__) return __INT_MAX__;
                else return q;
            }
            else return 0;
        }
        return 0;
    }
};
// @lc code=end
