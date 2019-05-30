//
// Created by hotdl on 19-5-30.
//

#include <string>
#include <algorithm>

using namespace std;

namespace lt0043 {
    class Solution {
    private:
        string add(const string &num1, const string &num2) {
            string result;
            int c1 = num1.size() - 1;
            int c2 = num2.size() - 1;
            int carry = 0;
            while (c1 >= 0 || c2 >= 0) {
                int a = c1 < 0 ? 0 : num1[c1] - '0';
                int b = c2 < 0 ? 0 : num2[c2] - '0';
                int sum = a + b + carry;
                int r = sum % 10;
                carry = sum / 10;
                result.push_back(r + '0');
                c1--;
                c2--;
            }
            if (carry > 0) {
                result.push_back(carry + '0');
            }

            reverse(result.begin(), result.end());
            return result;
        }

    public:
        // 模拟笔算
        string multiply(string num1, string num2) {
            if (num1 == "0" || num2 == "0") return "0";
            vector<int> pos(num1.size() + num2.size(), 0);
            for (int i = num2.size() - 1; i >= 0; i--) {
                for (int j = num1.size() - 1; j >= 0; j--) {
                    int res = (num2[i] - '0') * (num1[j] - '0') + pos[i + j + 1];
                    pos[i + j + 1] = res % 10;
                    pos[i + j] += res / 10;
                }
            }
            string result;
            bool zero = true;
            for (int i = 0; i < pos.size(); i++) {
                if (zero && pos[i] == 0) continue;
                zero = false;
                result.push_back(pos[i] + '0');
            }
            return result;
        }

        string multiply1(string num1, string num2) {
            string result;
            map<int, string> record;
            for (int i = num2.size() - 1; i >= 0; i--) {
                int tmpNum = num2[i] - '0';
                string res;
                if (tmpNum == 0) {
                    res.push_back('0');
                } else {
                    if (record.count(tmpNum) > 0) {
                        res = record[tmpNum];
                    } else {
                        int carry = 0;
                        for (int j = num1.size() - 1; j >= 0; j--) {
                            int product = (num1[j] - '0') * tmpNum + carry;
                            int r = product % 10;
                            carry = product / 10;
                            res.push_back(r + '0');
                        }
                        if (carry > 0) {
                            res.push_back(carry + '0');
                        }
                        reverse(res.begin(), res.end());
                        record.insert(pair<int, string>{tmpNum, res});
                    }
                    if (res.size() > 0 && res != "0") {
                        for (int k = 0; k < num2.size() - 1 - i; k++) {
                            res.push_back('0');
                        }
                    }
                }
                result = add(result, res);
            }
            return result;
        }
    };
}