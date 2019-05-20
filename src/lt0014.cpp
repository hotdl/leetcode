//
// Created by Hotdl on 2019/5/7.
//

#include <string>
#include <vector>

using namespace std;

namespace lt0014 {
    class Solution {
    public:
        string longestCommonPrefix(vector<string> &strs) {
            if (strs.size() == 0) return "";
            if (strs.size() == 1) return strs[0];
            int min = strs[0].size();
            for (string str: strs) {
                if (str.size() < min) {
                    min = str.size();
                }
            }
            int tail = 0;
            for (tail = 0; tail < min; tail++) {
                for (int i = 0; i < strs.size() - 1; i++) {
                    if (strs[i][tail] != strs[i + 1][tail]) {
                        return tail > 0 ? string(strs[0], 0, tail) : "";
                    }
                }
            }
            return tail > 0 ? string(strs[0], 0, tail) : "";
        }
    };
}