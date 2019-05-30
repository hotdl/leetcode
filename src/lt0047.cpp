//
// Created by hotdl on 19-5-30.
//

#include <vector>
#include <algorithm>

using namespace std;

namespace lt0047 {
    class Solution {
    private:
        vector<vector<int>> recursive_permute_unique(vector<int> &nums, int start) {
            if (start == nums.size() - 1) return vector<vector<int>>{{nums[start]}};
            vector<vector<int>> result;
            for (int i = start; i < nums.size(); i++) {
                if (i > start && nums[i] == nums[i - 1]) continue;
                for (int k = i; k > start; k--) {
                    swap(nums[k], nums[k - 1]);
                }
                vector<vector<int>> tmpOut = recursive_permute_unique(nums, start + 1);
                for (int j = 0; j < tmpOut.size(); j++) {
                    tmpOut[j].insert(tmpOut[j].begin(), nums[start]);
                    result.push_back(tmpOut[j]);
                }
                for (int k = start; k < i; k++) {
                    swap(nums[k], nums[k + 1]);
                }
            }
            return result;
        }

    public:
        vector<vector<int>> permuteUnique(vector<int> &nums) {
            sort(nums.begin(), nums.end());
            return recursive_permute_unique(nums, 0);
        }
    };
}