/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        unsigned int ourNum = num;
        string str;
        char arr[17]="0123456789abcdef";
        do{
            str += arr[ourNum%16];
            ourNum /= 16;
        }while(ourNum);
        return {str.rbegin(),str.rend()};
    }
};
// @lc code=end

