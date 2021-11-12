import java.util.Stack;

/*
 * @lc app=leetcode.cn id=42 lang=java
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
    public int trap(int[] A) {
        if(A == null) return 0;
        Stack<Integer> s = new Stack<>();
        int i = 0, maxWater = 0, maxBotWater = 0;
        while(i < A.length){
            if(s.isEmpty() || A[i] <= A[s.peek()]){
                s.push(i++);
            }else{
                int bot = s.pop();
                maxBotWater = s.isEmpty() ? 0 : (Math.min(A[s.peek()], A[i]) - A[bot]) * (i - s.peek() - 1);
                maxWater += maxBotWater;
            }
        }
        return maxWater;
    }
}
// @lc code=end

