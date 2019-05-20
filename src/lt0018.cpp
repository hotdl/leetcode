//
// Created by hotdl on 19-5-13.
//

#include <vector>
#include <algorithm>

using namespace std;

namespace lt0018 {
    class Solution {
    public:
        vector<vector<int>> fourSum(vector<int> &nums, int target) {
            vector<vector<int>> output;
            if (nums.size() < 4) return output;
            if (nums.size() == 4) {
                if (nums[0] + nums[1] + nums[2] + nums[3] == target) {
                    output.push_back(nums);
                }
                return output;
            }

            sort(nums.begin(), nums.end());
            int size = nums.size();
            for (int i = 0; i < size - 3; i++) {
                if (i > 0 && nums[i] == nums[i - 1]) continue;
                if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
                if (nums[i] + nums[size - 1] + nums[size - 2] + nums[size - 3] < target) continue;
                int new_target = target - nums[i];
                for (int j = i + 1; j < size - 2; j++) {
                    if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                    if (nums[j] + nums[j + 1] + nums[j + 2] > new_target) break;
                    if (nums[j] + nums[size - 1] + nums[size - 2] < new_target) continue;
                    int left = j + 1;
                    int right = size - 1;
                    while (left < right) {
                        if (left > j + 1 && nums[left] == nums[left - 1]) {
                            left++;
                        } else if (right < size - 1 && nums[right] == nums[right + 1]) {
                            right--;
                        } else {
                            int sum = nums[j] + nums[left] + nums[right];
                            if (sum > new_target) {
                                right--;
                            } else {
                                if (sum == new_target) {
                                    output.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
                                }
                                left++;
                            }
                        }
                    }
                }
            }

            return output;
        }
    };
}