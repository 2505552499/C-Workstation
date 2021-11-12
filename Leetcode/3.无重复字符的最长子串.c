/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start


int lengthOfLongestSubstring(char * s){
    int store[256]={0};
    int len=strlen(s);
    int l=0,r=0;
    int ans=0;
    while(r<len){
        store[s[r]]++;
        while(store[s[r]]>1){
            store[s[l]]--;
            l++;
        }
        ans=fmax(ans,r-l+1);
        r++;
    }
    return ans;
}
// @lc code=end

