/*
 * @lc app=leetcode.cn id=174 lang=cpp
 *
 * [174] 地下城游戏
 */

// @lc code=start
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dun) {
        if(!dun.size() || !dun[0].size())
            return 1;
        int nrow = dun.size();
        int ncol = dun.size();
        vector<int> row(ncol + 1, INT_MAX);
        row[ncol - 1] = 1;
        int i, j, t;
        for(i = nrow - 1; i >= 0; --i){
            for(j = ncol - 1; j >= 0; -=j){
                t = min(row[j], row[j + 1]) - dun[i][j];
                row[j] = max(t,1);
            }
        }
        return row[0];
    }
};
// @lc code=end

