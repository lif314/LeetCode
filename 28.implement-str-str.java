/*
 * @lc app=leetcode id=28 lang=java
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {

    public int strStr(String haystack, String needle) {
        int needleLen = needle.length();
        if(needleLen == 0)
            return 0;

        int haystackLen = haystack.length();
        if(haystackLen == 0)
            return -1;

        if(needleLen == haystackLen && haystack.equals(needle))
            return 0;

        if(needleLen > haystackLen)
            return -1;

        int i = 0;
        for(; i + needleLen <= haystack.length(); i++)
            if(haystack.substring(i, i + needleLen).equals(needle))
                return i;

        return -1;
    }
}

// @lc code=end

