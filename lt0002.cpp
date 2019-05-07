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

namespace lt0002 {
    class Solution {
    public:
        ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
            if (l1 == nullptr) return l2;
            if (l2 == nullptr) return l1;
            ListNode *head = new ListNode(0);
            ListNode *curr = head;
            int res = 0;
            int up = 0;
            int v1, v2 = 0;
            while (l1 || l2 || up) {
                res = 0;
                if (l1) {
                    res += l1->val;
                    l1 = l1->next;
                }
                if (l2) {
                    res += l2->val;
                    l2 = l2->next;
                }
                res += up;
                curr->next = new ListNode(res % 10);
                curr = curr->next;
                up = res / 10;
            }

            ListNode* result = head->next;
            delete head;
            return result;
        }
    };
}

