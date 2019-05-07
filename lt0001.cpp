//
// Created by hotdl on 19-5-7.
//

#include <vector>
#include <map>

using namespace std;
namespace lt0001 {
    class Solution {
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            map<int, int> tmap;
            for (int i = 0; i < nums.size(); i++) {
                int match = target - nums[i];
                if (tmap.count(match) > 0) {
                    return vector<int>{tmap.at(match), i};
                }
                tmap.insert(pair<int, int>(nums[i], i));
            }
            return vector<int>{0, 0};
        }
    };
}