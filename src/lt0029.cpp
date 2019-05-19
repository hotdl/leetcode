//
// Created by hotdl on 19-5-16.
//

namespace lt0029 {
    class Solution {
    public:
        long add(long a, long b) {
            long sum = a ^b;
            long carry = (a & b) << 1;
            while (carry != 0) {
                a = sum;
                b = carry;
                sum = a ^ b;
                carry = (a & b) << 1;
            }
            return sum;
        }

        int divide(int dividend, int divisor) {
            long a = dividend, b = divisor;
            long ans = 0;
            bool negative = (dividend >> 31) ^(divisor >> 31);
            if (a >> 31) a = add(~a, 1);
            if (b >> 31) b = add(~b, 1);
            if (a < b) return 0;
            for (int i = 31; i >= 0; i--) {
                if ((a >> i) >= b) {
                    ans += ((long) 1 << i);
                    a -= (b << i);
                }
            }
            if (negative) ans = add(~ans, 1);
            if (ans > 2147483647 || ans < -2147483648) ans = 2147483647;
            return ans;
        }
    };
}