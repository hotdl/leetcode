//
// Created by Hotdl on 2019/5/9.
//

#include <vector>

using namespace std;

namespace lt0026 {
    class Solution {
    public:
        int removeDuplicates(vector<int> &nums) {
            if (nums.size() == 0) return 0;
            int flag = 0;
            int last = nums[0];
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > last) {
                    last = nums[i];
                    nums[++flag] = last;
                }
            }
            return flag + 1;
        }
    };
}