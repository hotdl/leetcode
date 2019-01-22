package com.hotdl.leetcode.lt0001_twosum;

import java.util.HashMap;
import java.util.Map;

/**
 * 〈〉
 *
 * @author Hotdl
 * @date 2019/1/22 22:56
 */
public class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int result = target - nums[i];
            if (map.containsKey(result)) {
                return new int[]{map.get(result), i};
            } else {
                map.put(nums[i], i);
            }
        }
        return null;
    }

    public static void main(String[] args) {
        System.out.println(new Solution().twoSum(new int[]{2, 7, 11, 15}, 9));
    }
}