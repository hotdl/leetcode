package com.hotdl.leetcode.lt0003_longest_substring_without_repeating_characters;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/**
 * Given a string, find the length of the longest substring without repeating characters.
 *
 * @author Hotdl
 * @date 2019/1/24 23:59
 */
public class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        int maxLength = 0;
        for (int i = 0, j = 0; j < s.length(); j++) {
            char c = s.charAt(j);
            if (map.containsKey(c)) {
                i = Math.max(i, map.get(c) + 1);
            }
            maxLength = Math.max(maxLength, j - i + 1);
            map.put(c, j);
        }
        return maxLength;
    }

    public static void main(String[] args) {
        System.out.println(new Solution().lengthOfLongestSubstring(""));
    }
}