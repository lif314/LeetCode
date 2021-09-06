/*
 * @lc app=leetcode id=7 lang=c
 *
 * [7] Reverse Integer
 */

// @lc code=start

/* solution 1: int ---> char ---> int */
// char ---> int
// int atoi(char s[])
// {
//     int i, n, sign;

//     for(i = 0; isspace(s[i]); i++) // skip the space
//         ;

//     sign = (s[i] == '-') ? -1 : 1;
//     if(s[i] == '+' || s[i] == '-') // skip
//         i++;
//     for(n = 0; isdigit(s[i]); i++)
//         n = 10 * n + (s[i] - '0');
    
//     return sign * n;
// }

// int ----> char :  reverse
// void itoa(int n, char s[])
// {
//     int i, sign;
//     if((sign = n) < 0)  // record flag
//         n = -n;         // n > 0

//     i =  0;
//     do
//     {
//         s[i++] = n % 10 + '0';
//     } while ((n /= 10) > 0);

//     if(sign < 0)
//         s[i++] = '-';
//     s[i] = '\0';
// }

// int reverse(int x){
//     char *str;
//     itoa(x, str);
//     return  atoi(str);
// }

/* Runtime Error */

/* solution2: % /*/
// watch out!! --- overflow



// -2^(31) <= x <= 2^(31) - 1
#define INT_MAX 2147483647 
#define INT_MIN (-INT_MAX - 1)

int reverse(int x){
    int res = 0;
    while(x){
        // check overflow:
        if( res < INT_MIN / 10 || res > INT_MAX / 10)
        {
            return 0;
        }

        // check before split
        // if check is true, after split, must overflow

        // split:
        int digit = x % 10;
        x /= 10;
        res = 10 * res + digit;
    }
    
    return res;
}


// @lc code=end

