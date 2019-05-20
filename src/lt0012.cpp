//
// Created by hotdl on 19-5-11.
//

#include <string>

using namespace std;

namespace lt0012 {
    const int LENGTH = 13;
    int INT_ARR[LENGTH] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string ROMAN_ARR[LENGTH] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    class Solution {
    public:
        string intToRoman(int num) {
            if (num > 3999) return "";
            string output;
            for (int i = LENGTH - 1; i >= 0; i--) {
                int r = num / INT_ARR[i];
                if (r > 0) {
                    while (r-- > 0) {
                        output.append(ROMAN_ARR[i]);
                    }
                    num %= INT_ARR[i];
                }
            }
            return output;
        }
    };
}


