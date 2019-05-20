//
// Created by hotdl on 19-5-7.
//
#include <string>
#include <map>

using namespace std;

namespace lt0013 {
    const map<char, int> ROMAN_MAP({pair<char, int>{'I', 1},
                                    pair<char, int>{'V', 5},
                                    pair<char, int>{'X', 10},
                                    pair<char, int>{'L', 50},
                                    pair<char, int>{'C', 100},
                                    pair<char, int>{'D', 500},
                                    pair<char, int>{'M', 1000}});

    class Solution {
    public:
        int romanToInt(string s) {
            int result = 0;
            int last_value = 2147483647;
            for (char c: s) {
//                int value = ROMAN_MAP.at(c);
                int value = 1;
                switch (c) {
                    case 'V':
                        value = 5;
                        break;
                    case 'X':
                        value = 10;
                        break;
                    case 'L':
                        value = 50;
                        break;
                    case 'C':
                        value = 100;
                        break;
                    case 'D':
                        value = 500;
                        break;
                    case 'M':
                        value = 1000;
                        break;
                    default:
                        break;
                }
                if (value > last_value) {
                    result -= (last_value + last_value);
                }
                result += value;
                last_value = value;
            }
            return result;
        }
    };
}