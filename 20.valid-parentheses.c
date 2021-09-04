/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */

// @lc code=start

bool isValid(char * s){
    int len = strlen(s);
    if(len % 2 != 0)
        return false;

    int stack[len + 1], top = 0;  // 这里用char定义超时了，用int就好了,emmmmm,说明处理数字比字符串快多了
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[top++] = s[i];
        else{
            if(top == 0 || (s[i] == ')' && stack[top - 1] != '(') || (s[i] == '}' && stack[top - 1] != '{') || (s[i] == ']' && stack[top - 1] != '['))
                return false;
            
            top--;
        }
    }
     return top == 0;
}
// @lc code=end

