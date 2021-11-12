/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n=0,flag=1;
        int a[20];
        if(x>1&&x%10==0) flag=0;
        while(x>0){
            a[n++]=x%10;
            x=x/10;
        }
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]) flag=0;
        }
        
        if(flag==0) return false;
        else return true;
    }
};
// @lc code=end

