//
// Created by hotdl on 19-5-13.
//

#include <vector>
#include <string>
#include <map>

using namespace std;

namespace lt0017 {
    class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            vector<string> output;
            if (digits.empty()) return output;
            output.push_back("");
            for (int i = 0; i < digits.size(); i++) {
                output = combination2(output, DIGIT_MAP.at(digits[i]));
            }
            return output;
        }

    private:
        map<char, vector<string>> DIGIT_MAP{
                pair<char, vector<string>>('2', {"a", "b", "c"}),
                pair<char, vector<string>>('3', {"d", "e", "f"}),
                pair<char, vector<string>>('4', {"g", "h", "i"}),
                pair<char, vector<string>>('5', {"j", "k", "l"}),
                pair<char, vector<string>>('6', {"m", "n", "o"}),
                pair<char, vector<string>>('7', {"p", "q", "r", "s"}),
                pair<char, vector<string>>('8', {"t", "u", "v"}),
                pair<char, vector<string>>('9', {"w", "x", "y", "z"})
        };

        vector<string> combination2(vector<string> a, vector<string> b) {
            vector<string> result;
            for (string a_str: a) {
                for (string b_str: b) {
                    result.push_back(a_str + b_str);
                }
            }
            return result;
        }
    };
}