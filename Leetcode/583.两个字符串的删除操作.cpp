/*
 * @lc app=leetcode.cn id=583 lang=cpp
 *
 * [583] 两个字符串的删除操作
 */

// @lc code=start
class Solution
{
private:
    int quchong(string &s1, string &s2)
    {

        int flag = 0, count = 0;
        int b1[100] = {0}, b2[100] = {0};
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < s2.size(); j++)
            {
                if (s1[i] == s2[j] && b2[j] == 0)
                {
                    b2[j] = 1;
                    flag = 1;
                }
            }
                if (flag == 0)
                {
                    s1.erase(i, 1);
                    count++;
                    i--;
                }
                flag = 0;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            for (int j = 0; j < s1.size(); j++)
            {
                if (s2[i] == s1[j] && b1[j] != 1)
                {
                    b1[j] = 1;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                s2.erase(i, 1);
                count++;
                i--;
            }
            flag = 0;
        }
        if(s1.size()==s2.size()) return count;
        else return -1;
    }

public:
    int minDistance(string s1, string s2)
    {
        int len1 = s1.size(), len2 = s2.size();
        int flag = 0, count = 0;
        int a1[100] = {0}, a2[100] = {0};
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < len2; j++)
            {
                if (s1[i] == s2[j] && a2[j] != 1)
                {
                    a2[j] = 1;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                s1.erase(i, 1);
                count++;
                i--;
            }
            flag = 0;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            for (int j = 0; j < len1; j++)
            {
                if (s2[i] == s1[j] && a1[j] != 1)
                {
                    a1[j] = 1;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                s2.erase(i, 1);
                count++;
                i--;
            }
            flag = 0;
        }
        count = count + quchong(s1, s2);
        int min=0;
        for(int i = 0,j=0;i<s1.size()&&j<s1.size();){
            if(s1[i]!=s2[j]&&i>=j) i++;
            if(s1[i]!=s2[j]&&i<j) j++;
            if(s1[i]==s2[j]){
                i++;
                j++;
            }

            min =( i>=j?i:j);
        }
        
        count=count+2*(s1.size()-min);

        // for(int i = 0;i < s1.size();i++){
        //     for(int j=0;j<s2.size();j++){
        //         if(s1[i]==s2[j]) i++;
        //         else count=count+2;
        //     }
        // }
        return count;
    }
};
// @lc code=end
