//
// Created by hotdl on 19-5-8.
//
#include <string>
#include <map>
#include <cmath>

using namespace std;

namespace lt0003 {
    class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int max_length = 0;
            map<char, int> m;
            int flag = 0;
            for (int i = 0; i < s.length(); i++) {
                char c = s[i];
                if (m.count(c) > 0) {
                    flag = max(flag, m.at(c) + 1);
                    m.at(c) = i;
                } else {
                    m.insert(pair<char, int>(c, i));
                }
                max_length = max(max_length, i - flag + 1);
            }
            return max_length;
        }
    };
}