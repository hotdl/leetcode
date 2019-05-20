//
// Created by hotdl on 19-5-10.
//

#include <string>

using namespace std;

namespace lt0038 {
    class Solution {
    public:
        string countAndSay(int n) {
            string input = "1";
            string output = "1";
            while (--n > 0) {
                output.clear();
                for (int i = 0; i < input.length(); i++) {
                    int j = i + 1;
                    for (; j < input.length() && input[j] == input[i]; j++) {}
                    output.push_back('0' + j - i);
                    output.push_back(input[i]);
                    i = j - 1;
                }
                input = output;
            }
            return output;
        }
    };
}