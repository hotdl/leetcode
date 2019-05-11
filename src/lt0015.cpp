//
// Created by hotdl on 19-5-11.
//

#include <vector>
#include <algorithm>

using namespace std;

namespace lt0015 {
    class Solution {
    public:
        vector<vector<int>> threeSum(vector<int> &nums) {
            vector<vector<int>> output;
            if (nums.size() < 3) return output;
            if (nums.size() == 3) {
                if (nums[0] + nums[1] + nums[2] == 0) {
                    output.push_back(nums);
                }
                return output;
            }
            sort(nums.begin(), nums.end());
            int last1 = nums[0] == 0 ? 1 : 0;
            for (int i = 0; i < nums.size() - 2; i++) {
                if (nums[i] == last1) continue;
                last1 = nums[i];
                int j = i + 1;
                int k = nums.size() - 1;
                int last2 = nums[j] == 0 ? 1 : 0;
                while (j < k) {
                    if (nums[j] == last2) {
                        j++;
                        continue;
                    }
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum == 0) {
                        output.push_back(vector<int>{nums[i], nums[j], nums[k]});
                        last2 = nums[j];
                        j++;
                        continue;
                    } else if (sum < 0) {
                        last2 = nums[j];
                        j++;
                        continue;
                    } else {
                        k--;
                        continue;
                    }
                }
            }
            return output;
        }
    };
}