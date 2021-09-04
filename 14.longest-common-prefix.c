/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 */

// @lc code=start

char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0)
        return "";
    int len = strlen(strs[0]);
    for(int i = 0; i < len; i++){
        for(int j = 1; j < strsSize; j++)
             if(strs[0][i] != strs[j][i]){
                 strs[0][i] = '\0';
                 return strs[0];  // 太坑啦！！！！
                 break;
             }
    }
    
    if(strlen(strs[0]) > 0)
        return strs[0];
    return "";
}
// @lc code=end

