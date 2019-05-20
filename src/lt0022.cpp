//
// Created by hotdl on 19-5-15.
//

#include <string>
#include <vector>

using namespace std;

namespace lt0022 {
    class Solution {
    public:
        vector<string> generateParenthesis(int n) {
            str.resize(n * 2, '-');
            gen(n, 0, 0);
            return result;
        }

    private:
        string str;
        vector<string> result;

        void gen(int open, int close, int index) {
            if (open == 0) {
                if (close == 0) {
                    // push_back保存的是引用对象的浅拷贝
                    result.push_back(str);
                    return;
                }
            } else {
                str[index] = '(';
                gen(open - 1, close + 1, index + 1);
            }
            if (close != 0) {
                str[index] = ')';
                gen(open, close - 1, index + 1);
            }
        }
    };
}