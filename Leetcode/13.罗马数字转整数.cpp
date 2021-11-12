/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int a,sum=0;
        for(int i=0;i<s.length();i++){
            a=getsum(s[i]);
            if(getsum(s[i])<getsum(s[i+1])){
                a=getsum(s[i+1])-getsum(s[i]);
                i++;
            }
            sum+=a;
        }
        return sum;
    }
    int getsum(char c){
        int sum=0;
        switch (c)
        {
        case /* constant-expression */'I':
            /* code */sum+=1;
            break;
        case 'V':sum=5;
            break;
        case 'X':sum=10;
            break;
        case 'L':sum=50;
            break;
        case 'C':sum=100;
            break;
        case 'D':sum=500;
            break;
        case 'M':sum=1000;
        default:
            break;
        }
        return sum;
    }
};
// @lc code=end

