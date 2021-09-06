/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start

// -2^(31) <= x <= 2^(31) - 1
#define INT_MAX 2147483647 
#define INT_MIN (-INT_MAX - 1)\

bool isPalindrome(int x){
    if (x < 0)
        return false;
    
    int temp = x;
    int rev = 0;
    while(temp)
    {
        if( rev < INT_MIN / 10 || rev > INT_MAX / 10)
        {
            return 0;
        }

        // check before split
        // if check is true, after split, must overflow

        // split:
        int digit = temp % 10;
        temp /= 10;
        rev = 10 * rev + digit;
    }

    if(rev == x)
        return true;

    return false;
}

// @lc code=end

