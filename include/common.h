//
// Created by hotdl on 19-5-8.
//

#ifndef LEETCODE_COMMON_H
#define LEETCODE_COMMON_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

namespace common {
    int add(int a, int b) {
        int sum = a ^b;
        int carry = (a & b) << 1;
        while (carry != 0) {
            a = sum;
            b = carry;
            sum = a ^ b;
            carry = (a & b) << 1;
        }
        return sum;
    }

    int substract(int a, int b) {
        return add(a, add(~b, 1));
    }

    int multiply(int a, int b) {
        int product = 0;
        bool negative = (a >> 31) ^(b >> 31);
        if (a >> 31) a = add(~a, 1);
        if (b >> 31) b = add(~b, 1);
        while (b != 0) {
            if (b & 0x1) {
                product = add(product, a);
            }
            a = a << 1;
            b = b >> 1;
        }
        return negative ? add(~product, 1) : product;
    }

    int divide(int a, int b) {
        int ans = 0;
        bool negative = (a >> 31) ^(b >> 31);
        if (a >> 31) a = add(~a, 1);
        if (b >> 31) b = add(~b, 1);
        if (a < b) return 0;
        for (int i = 31; i >= 0; i--) {
            if ((a >> i) >= b) {
                ans += (1 << i);
                a -= (b << i);
            }
        }
        return negative ? add(~ans, 1) : ans;
    }
}

#endif //LEETCODE_COMMON_H
