/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int m = matrix.size();
        // int n = matrix[0].size();
        // int k =0;
        // int flag;
        // for(;k < m - 1 && k < n - 1; k++){
        //     if(matrix[k][k] <= target && matrix[k + 1][k + 1] > target){
        //         flag = k;
        //         break;
        //     }
        //     else flag = min(n - 1, m - 1);
        // }
        // if(m == 1){
        //     for(int i = 0;i< n;i++){
        //         if(matrix[0][i] == target) return true;
        //     }
        //     return false;
        // }
        // for(int i = 0;i <= flag;i++){
        //     for(int j = flag;j<n;j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // for(int i = flag;i < m;i++){
        //     for(int j = 0;j<= flag;j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        
        // return false;
        int m = matrix.size(), n = m? matrix[0].size():0,r = 0,c = n - 1;
        while(r < m && c >= 0){
            if(matrix[r][c] == target){
                return true;
            }
            matrix[r][c] > target ? c-- : r++;
        }
        return false;
    }
};
// 1  3  5  7  9
// 2  4  6  8  12
// 11 13 15 17 19
// 12 14 16 18 20
// 21 22 23 24 25

// 5  6  10  14
// 6  10 13  18
// 10 13 18  19
// @lc code=end

