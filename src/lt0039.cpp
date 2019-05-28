//
// Created by hotdl on 19-5-28.
//

#include <vector>
#include <algorithm>

using namespace std;

namespace lt0039 {
    class Solution {
    private:
        vector<vector<int>> recursive_comb(vector<int> &candidates, int begin, int end, int target) {
            if (target == 0) return vector<vector<int>>{{}};
            if (candidates[0] > target) return vector<vector<int>>{};
            vector<vector<int>> output;
            for (int i = begin; i < end; i++) {
                int factor = candidates[i];
                if (factor > target) break;
                vector<vector<int>> next_output = recursive_comb(candidates, i, end, target - factor);
                for (vector<int> item : next_output) {
                    vector<int> newItem{factor};
                    newItem.insert(newItem.end(), item.begin(), item.end());
                    output.push_back(newItem);
                }
            }

            return output;
        }

    public:
        vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
            sort(candidates.begin(), candidates.end());
            return recursive_comb(candidates, 0, candidates.size(), target);
        }
    };
}