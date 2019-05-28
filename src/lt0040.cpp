//
// Created by hotdl on 19-5-29.
//

#include <vector>
#include <algorithm>

using namespace std;

namespace lt0040 {
    class Solution {
    private:
        vector<vector<int>> recursive_comb2(vector<int> &candidates, int begin, int end, int target) {
            if (target == 0) return vector<vector<int>>{{}};
            if (candidates[0] > target) return vector<vector<int>>{};
            vector<vector<int>> output;
            for (int i = begin; i < end; i++) {
                int factor = candidates[i];
                if (i > begin && factor == candidates[i - 1]) continue;
                if (factor > target) break;
                vector<vector<int>> tmpOutput = recursive_comb2(candidates, i + 1, end, target - factor);
                for (vector<int> tmpItem: tmpOutput) {
                    vector<int> item{factor};
                    item.insert(item.end(), tmpItem.begin(), tmpItem.end());
                    output.push_back(item);
                }
            }
            return output;
        }

    public:
        vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
            sort(candidates.begin(), candidates.end());
            return recursive_comb2(candidates, 0, candidates.size(), target);
        }
    };
}