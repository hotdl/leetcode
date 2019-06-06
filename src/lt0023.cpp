//
// Created by hotdl on 19-6-3.
//

#include "common.h"
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

namespace lt0023 {
    class Solution {
        struct CompNode {
            bool operator()(ListNode *&x, ListNode *&y) { return x->val > y->val; }
        };

    public:
        ListNode *mergeKLists(vector<ListNode *> &lists) {
            priority_queue<ListNode *, vector<ListNode *>, CompNode> pq;
            for (ListNode *ln : lists) {
                if (ln) {
                    pq.push(ln);
                }
            }

            ListNode head(0);
            ListNode *tmp = &head;
            while (!pq.empty()) {
                ListNode *tp = pq.top();
                pq.pop();
                tmp->next = tp;
                tmp = tp;
                if (tp->next) {
                    pq.push(tp->next);
                }
            }

            return head.next;
        }
    };
}