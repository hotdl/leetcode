//
// Created by hotdl on 19-5-15.
//

#include "common.h"

namespace lt0019 {
    class Solution {
    public:
        ListNode *removeNthFromEnd(ListNode *head, int n) {
            if (head == NULL || n <= 0) return head;
            int length = 0;
            ListNode *tmp = head;
            while (tmp != NULL) {
                length++;
                tmp = tmp->next;
            }
            int count = length - n;
            if (count < 0) return head;
            if (count == 0) {
                tmp = head->next;
                delete head;
                return tmp;
            }
            tmp = head;
            while (--count > 0) {
                tmp = tmp->next;
            }
            if (tmp->next != NULL) {
                ListNode *next = tmp->next;
                tmp->next = next->next;
                delete next;
            }
            return head;
        }
    };
}

