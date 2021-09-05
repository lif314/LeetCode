
/*
 * @lc app=leetcode id=26 lang=java
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

class Solution {
    public int removeDuplicates(int[] nums) {
        int len = nums.length;
        if(len == 0) 
            return 0;

        int k = 1;
        int i = 1;
        for(; i < len;){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
                i++;
            }else{
                i++;
            }
            
        }
        
        return k;
    }
}
// @lc code=end

