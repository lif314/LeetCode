/*
 * @lc app=leetcode id=58 lang=java
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
    public int lengthOfLastWord(String s) {
        String strip_s = s.strip();

        String[] part = strip_s.split(" ");

        return part[part.length - 1].length();
    }
}
// @lc code=end

