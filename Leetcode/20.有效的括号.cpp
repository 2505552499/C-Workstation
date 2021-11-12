/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
       stack<char> paren;
       for(char& c:s){
           switch(c){
               case '(':
               case '{':
               case '[':paren.push(c);break;
               case ')':if(paren.empty()||paren.top()!='(') return false;else paren.pop();break;
               case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
               case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
               default: ; 
           }
       }
       return paren.empty();
    }
};

// @lc code=end
