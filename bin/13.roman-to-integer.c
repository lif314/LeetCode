/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start

int romanToInt(char * s){
    int len = strlen(s);
    if(len < 1 || len > 15)
        return;

    // map
    int symbol[26];
    symbol['I' - 'A'] = 1;
    symbol['V' - 'A'] = 5;
    symbol['X' - 'A'] = 10;
    symbol['L' - 'A'] = 50;
    symbol['C' - 'A'] = 100;
    symbol['D' - 'A'] = 500;
    symbol['M' - 'A'] = 1000;

    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        // overflow!!
        if(i < len - 1 && symbol[s[i] - 'A'] < symbol[s[i+1] - 'A'])
            sum -= symbol[s[i] - 'A'];
        else
            sum += symbol[s[i] - 'A'];
    }
    
    return sum;
}

// @lc code=end

