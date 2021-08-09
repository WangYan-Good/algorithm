/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
// #include <iostream>

// struct ListNode{
//     int val;
//     ListNode *next;
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l1_ptr = l1;
        ListNode *l2_ptr = l2;
        bool     flag = true;
        ListNode *Node = nullptr;
        if( l1_ptr == nullptr ) {
            return l2;
        }

        if( l2_ptr == nullptr ) {
            return l1;
        }

        if( l1->val > l2->val ) {
            l1_ptr = l2;
            l2_ptr = l1;
            flag = false;
        }

        while ( l1_ptr != nullptr && l2_ptr != nullptr ) {
            //
            // l1_ptr is the last node
            //
            if( l1_ptr->next == nullptr ) {
                if( l2_ptr->val >= l1_ptr->val ) {
                    l1_ptr->next = l2_ptr;
                    break;
                }
            }

            //
            // l2_ptr is the last node
            //
            if( l2_ptr->next == nullptr ) {
                if( l1_ptr->val < l2_ptr->val && l1_ptr->next->val < l2_ptr->val ) {
                    l1_ptr = l1_ptr->next;
                    continue;
                } else {
                    l2_ptr->next = l1_ptr->next;
                    l1_ptr->next = l2_ptr;
                    break;
                }
            }

            //
            // insert l2's node into l1's list
            //
            if( l2_ptr->val >= l1_ptr->val 
            && l2_ptr->val <= l1_ptr->next->val ) {
                Node = l2_ptr;
                l2_ptr = l2_ptr->next;
                Node->next = l1_ptr->next;
                l1_ptr->next = Node;
            } else {
                l1_ptr = l1_ptr->next;
            }

        }
        if( flag ) {
            return l1;
        } else {
            return l2;
        }
    }
};
// @lc code=end

