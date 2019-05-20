//
// Created by Hotdl on 2019/5/9.
//

#include <vector>

using namespace std;

namespace lt0035 {
    class Solution {
    public:
        int searchInsert(vector<int> &nums, int target) {
            if (nums.empty()) return 0;
            return binary_search(nums, target, 0, nums.size());
        }

    private:
        int binary_search(vector<int> &nums, int target, int start, int end) {
            int count = end - start;
            if (count <= 1) {
                if (start >= nums.size() || nums[start] >= target) return start;
                else return start + 1;
            }
            int mid = start + count / 2;
            if (target == nums[mid]) return mid;
            if (target > nums[mid]) return binary_search(nums, target, mid + 1, end);
            else return binary_search(nums, target, start, mid);
        }
    };
}

