//
// Created by Hotdl on 2019/5/9.
//

#include <string>

using namespace std;

namespace lt0028 {
    class Solution {
    public:
        int strStr(string haystack, string needle) {
            if (needle.length() == 0) return 0;
            // WARN: 注意这里有个坑，在for里面<=处直接写两个length相减
            // 若为负时会变成无符号数来处理，就变得很大，结果就有问题
            // 因此，要么提前haystack小于needle时返回-1，要么先用Int变量存储差值
            // if (haystack.length() < needle.length()) return -1;
            int count = haystack.length() - needle.length();
            for (int i = 0; i <= count; i++) {
                bool match = true;
                for (int j = 0; j < needle.length(); j++) {
                    if (needle[j] != haystack[i + j]) {
                        match = false;
                        break;
                    }
                }
                if (match) return i;
            }
            return -1;
        }
    };
}
