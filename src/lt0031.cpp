//
// Created by hotdl on 19-5-20.
//

#include <vector>
#include <algorithm>

using namespace std;

namespace lt0031 {
    class Solution {
    public:
        void nextPermutation(vector<int> &nums) {
            if (nums.empty()) return;
            int i = 0;
            for (i = nums.size() - 1; i > 0; i--) {
                if (nums[i - 1] < nums[i]) {
                    break;
                }
            }
            if (i == 0) {
                sort(nums.begin(), nums.end());
            } else {
                int swap = nums.size() - 1;
                while (nums[swap] <= nums[i - 1]) {
                    swap--;
                }
                int tmp = nums[i - 1];
                nums[i - 1] = nums[swap];
                nums[swap] = tmp;
                sort(nums.begin() + i, nums.end());
            }
        }
    };
}
