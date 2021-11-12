/*
 * @lc app=leetcode.cn id=5 lang=c
 *
 * [5] 最长回文子串
 */

// @lc code=start
char * longestPalindrome(char * s){
    int len=strlen(s);
    if(len<2)
    return s;
    char *res;
    int start=0,end=0;
    for(int i=0;i<len;i++){
        int len1=expandAroundCenter(s,i,i);
        int len2=expandAroundCenter(s,i,i+1);
        int length=fmax(len1,len2);
        if(length>end-start){
            start=i-(length-1)/2;
            end=i+len/2;
        }
    }
    strncpy(res,s+start,end-start+1);
    return res;

}
int expandAroundCenter(char *s,int left,int right){
    int len=strlen(s);
    int L=left,R=right;
    while(L>=0&&R<len&&s[L]==s[R]){
        L--;
        R++;
    }
    return R-L-1;
}
// @lc code=end

