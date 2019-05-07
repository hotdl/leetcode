//
// Created by hotdl on 19-5-8.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include "common.h"

namespace lt0021 {
    class Solution {
    public:
        ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
            if (l2 == NULL) return l1;
            if (l1 == NULL) return l2;
            ListNode *head, *tail, *p1, *p2;
            if (l1->val > l2->val) {
                head = l2;
                tail = l2;
                p1 = l1;
                p2 = l2->next;
            } else {
                head = l1;
                tail = l1;
                p1 = l1->next;
                p2 = l2;
            }
            while (p1 != NULL && p2 != NULL) {
                if (p2->val < p1->val) {
                    tail->next = p2;
                    tail = tail->next;
                    p2 = p2->next;
                } else {
                    tail->next = p1;
                    tail = tail->next;
                    p1 = p1->next;
                }
            }
            if (p1 != NULL) {
                tail->next = p1;
            } else {
                tail->next = p2;
            }
            return head;
        }
    };
}