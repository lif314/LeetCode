/*
 * @lc app=leetcode id=35 lang=java
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
    public int searchInsert(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        int mid = 0;
        if(target < nums[left])
            return 0;
        if(target > nums[right])
            return right + 1;

        while(left <= right){
            mid = (left + right) / 2;
            if(target == nums[mid])
                return mid;
            if(target < nums[mid])
                if(target > nums[mid - 1])
                    return mid;
                else
                    right = mid - 1;
            if(target > nums[mid])
                if(target < nums[mid + 1])
                    return mid + 1;
                else
                    left = mid + 1;
        }

        return mid;
    }
}
// @lc code=end

