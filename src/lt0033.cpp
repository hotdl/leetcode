//
// Created by hotdl on 19-5-21.
//

#include <vector>

using namespace std;

namespace lt0033 {
    class Solution {
    private:
        int find_pivot(const vector<int> &nums) {
            int begin = 0;
            int end = nums.size() - 1;
            int mid = (begin + end) / 2;
            while (1) {
                if (end < begin) break;
                if (mid == 0) return nums[0] < nums[1] ? 1 : 0;
                if (mid == nums.size() - 1)
                    return nums[nums.size() - 2] < nums[nums.size() - 1] ? nums.size() - 1 : nums.size() - 2;
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) break;
                if (nums[mid] < nums[begin]) {
                    end = mid - 1;
                    mid = (begin + end) / 2;
                } else {
                    begin = mid + 1;
                    mid = (begin + end) / 2;
                }
            }
            return mid;
        }

        int binary_search(const vector<int> &nums, int begin, int end, int target) {
            if (end < begin) return -1;
            int mid = (begin + end) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) return binary_search(nums, begin, mid - 1, target);
            else return binary_search(nums, mid + 1, end, target);
        }

    public:
        int search(vector<int> &nums, int target) {
            if (nums.empty()) return -1;
            if (nums.size() == 1) return target == nums[0] ? 0 : -1;
            int pivot = find_pivot(nums);
            if (pivot == nums.size() - 1) {
                return binary_search(nums, 0, pivot, target);
            } else {
                if (target >= nums[0] && target <= nums[pivot]) {
                    return binary_search(nums, 0, pivot, target);
                } else if (target >= nums[pivot + 1] && target <= nums[nums.size() - 1]) {
                    return binary_search(nums, pivot + 1, nums.size() - 1, target);
                } else {
                    return -1;
                }
            }
        }
    };
}