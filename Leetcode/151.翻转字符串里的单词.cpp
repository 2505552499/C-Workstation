/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string res;
        int pos = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(i>pos)
                    res = s.substr(pos,i-pos)+" "+res;
                pos = i+1;
            }
            else if(i==s.size()-1)
                res = s.substr(pos,s.size()-pos)+" "+res;
        }
        s = res.substr(0,res.size()-1);
        return s;
    }
    
};
// @lc code=end

