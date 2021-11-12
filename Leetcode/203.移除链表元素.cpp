/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head != nullptr && head -> val == val){
            head = head -> next;
        }
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            if(curr -> val == val){
                prev -> next = curr -> next;
                curr = curr -> next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
// @lc code=end

