//
// Created by hotdl on 19-5-7.
//

namespace lt0007 {
    class Solution {
    public:
        int reverse(int x) {
            long result = 0;
            bool negative = x < 0;
            long input = (long) x;
            if (negative) {
                input = input * -1;
            }
            while (input > 0) {
                result = result * 10 + input % 10;
                input /= 10;
            }
            if (negative) {
                result *= -1;
            }
            if (result < -2147483648 || result > 2147483647) {
                return 0;
            }
            return result;
        }
    };
}
