/*
 * @lc app=leetcode id=27 lang=java
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
    public int removeElement(int[] nums, int val) {
        int k = 0;
        int len = nums.length;
        for(int i = 0; i < len;)
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
                i++;
            }else{
                i++;
            }

        return k;
    }
}
// @lc code=end

