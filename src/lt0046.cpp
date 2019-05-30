//
// Created by hotdl on 19-5-30.
//

#include <vector>

using namespace std;

namespace lt0046 {
    class Solution {
    private:
        vector<vector<int>> recursive_permute(vector<int> &nums, int start) {
            if (start == nums.size() - 1) return vector<vector<int>>{{nums[start]}};
            vector<vector<int>> result;
            for (int i = start; i < nums.size(); i++) {
                swap(nums[start], nums[i]);
                vector<vector<int>> res = recursive_permute(nums, start + 1);
                for (int j = 0; j < res.size(); j++) {
                    res[j].insert(res[j].begin(), nums[start]);
                }
                result.insert(result.end(), res.begin(), res.end());
            }

            //recorver vector
            for (int i = nums.size() - 1; i >= start; i--) {
                swap(nums[start], nums[i]);
            }

            return result;
        }

    public:
        vector<vector<int>> permute(vector<int> &nums) {
            return recursive_permute(nums, 0);
        }
    };
}