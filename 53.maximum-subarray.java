/*
 * @lc app=leetcode id=53 lang=java
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
    public int maxSubArray(int[] nums) {
        // dp
        /**
         * f(i) = max(f(i-1) + nums[i], nums[i])
         * f(0) = nums[0]
         * f(1) = max(f(0) + nums[1], f(0))
         */
        int pre = 0; // f(i-1)
        int res = nums[0];
        for (int i : nums) {
            pre = Math.max(pre + i, i);
            res = Math.max(pre, res);            
        }
    
        return res;
    }
}
// @lc code=end

