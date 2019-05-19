//
// Created by hotdl on 19-5-16.
//

#include "common.h"

namespace lt0024 {
    class Solution {
    private:
        void recursive_swap(ListNode *node) {
            if (node == NULL || node->next == NULL || node->next->next == NULL) return;
            ListNode *node1 = node->next;
            ListNode *node2 = node1->next;
            node1->next = node2->next;
            node2->next = node1;
            node->next = node2;
            recursive_swap(node->next->next);
        }

    public:
        ListNode *swapPairs(ListNode *head) {
            ListNode *tmp = new ListNode(0);
            tmp->next = head;
            recursive_swap(tmp);
            head = tmp->next;
            delete tmp;
            return head;
        }
    };
}