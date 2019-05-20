//
// Created by hotdl on 19-5-9.
//
#include <vector>

using namespace std;

namespace lt0027 {
    class Solution {
    public:
        int removeElement(vector<int> &nums, int val) {
            int curr = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != val) {
                    nums[curr++] = nums[i];
                }
            }
            return curr;
        }
    };
}