/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */
# include<cstdio>
# include<stack>

// @lc code=start
class MinStack {
public:
    stack<int> A,B;

    MinStack() {

    }
    
    void push(int val) {
        A.push(val);
        if(B.empty()||B.top()>=val)
            B.push(val);
    }
    
    void pop() {
        if(A.top()==B.top())
            B.pop();
        A.pop();
    }
    
    int top() {
        return A.top();
    }
    
    int getMin() {
        return B.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

