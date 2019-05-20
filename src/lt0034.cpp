//
// Created by hotdl on 19-5-21.
//

#include <vector>

using namespace std;

namespace lt0034 {
    class Solution {
    private:
        vector<int> recursive_search(vector<int> &nums, int begin, int end, int target) {
            if (end <= 0) {
                return nums[0] == target ? vector<int>{0, 0} : vector<int>{-1, -1};
            }
            if (begin >= nums.size() - 1) {
                return nums[nums.size() - 1] == target
                       ? vector<int>{(int) nums.size() - 1, (int) nums.size() - 1}
                       : vector<int>{-1, -1};
            }
            if (end < begin) {
                int i1 = -1, i2 = -1;
                if (nums[end] == target) i1 = end;
                if (nums[begin] == target) i2 = begin;
                if (i1 == -1) i1 = i2;
                if (i2 == -1) i2 = i1;
                return vector<int>{i1, i2};
            }
            int mid = (begin + end) / 2;
            if (nums[mid] == target) {
                vector<int> left = recursive_search(nums, begin, mid - 1, target);
                vector<int> right = recursive_search(nums, mid + 1, end, target);
                if (left[0] == -1 && left[1] == -1) {
                    left[0] = mid;
                    left[1] = mid;
                }
                if (right[0] == -1 && right[1] == -1) {
                    right[0] = mid;
                    right[1] = mid;
                }
                return vector<int>{left[0], right[1]};
            } else if (nums[mid] < target) {
                return recursive_search(nums, mid + 1, end, target);
            } else {
                return recursive_search(nums, begin, mid - 1, target);
            }
        }

    public:
        vector<int> searchRange(vector<int> &nums, int target) {
            if (nums.empty()) return vector<int>{-1, -1};
            if (target < nums[0]) return vector<int>{-1, -1};
            if (target > nums[nums.size() - 1]) return vector<int>{-1, -1};
            if (nums.size() == 1) return target == nums[0] ? vector<int>{0, 0} : vector<int>{-1, -1};
            return recursive_search(nums, 0, nums.size() - 1, target);
        }
    };
}