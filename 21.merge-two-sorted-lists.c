/*
 * @lc app=leetcode id=21 lang=c
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 递归大法最好用！！！
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    if(l1->val < l2->val){
        l1-> next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else{
        l2-> next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}
// @lc code=end

