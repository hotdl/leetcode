//
// Created by hotdl on 19-5-7.
//

#include <vector>

using namespace std;

namespace lt0009 {
    class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false;
            long backward = 0;
            int input = x;
            while (input > 0) {
                backward = backward * 10 + input % 10;
                input /= 10;
            }
            return backward == x;
        }
    };
}