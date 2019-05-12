//
// Created by hotdl on 19-5-12.
//

#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

namespace lt0016 {
    class Solution {
    public:
        int threeSumClosest(vector<int> &nums, int target) {
            if (nums.size() < 3) return 0;
            if (nums.size() == 3) return nums[0] + nums[1] + nums[2];
            sort(nums.begin(), nums.end());

            long closet = 2147483647;
            for (int i = 0; i < nums.size() - 2; i++) {
                int j = i + 1;
                int k = nums.size() - 1;
                while (j < k) {
                    long result = nums[i] + nums[j] + nums[k];
                    if (result == target) {
                        return result;
                    } else {
                        if (abs(result - target) < abs(closet - target)) {
                            closet = result;
                        }
                        if (result > target) {
                            k--;
                        } else {
                            j++;
                        }
                    }
                }
            }
            return closet;
        }
    };
}