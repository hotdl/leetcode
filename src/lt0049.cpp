//
// Created by Hotdl on 2019/6/1.
//
#include <map>

using namespace std;

namespace lt0049 {
    class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string> &strs) {
            vector<vector<string>> result{};
            if (strs.empty()) {
                return result;
            }
            map<string, vector<string>> mp;
            for (string s : strs) {
                int count[26] = {0};
                for (char c : s) {
                    count[c - 'a']++;
                }
                string key;
                for (int k : count) {
                    key += ('#' + k);
                }
                mp[key].push_back(s);
            }
            for (auto v: mp) {
                result.push_back(v.second);
            }
            return result;
        }
    };
}