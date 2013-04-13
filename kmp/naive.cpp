#include "naive.h"
//naive alogrithms
// 遇到不匹配时，i ,j都回溯；j回溯至0，i回溯至 i-j+1
int  NaiveMatch(const string &s, const string &t)
{
    int i(0),j(0);//字符下标均从0开始
    while( i<s.length() && j<t.length())
    {
        if(s[i]==t[j])//两字符相等则继续匹配
        {
            i++;
            j++;
        }
        else
        {   // 若有模式串与主串遇到不匹配元素时，i , j需要都回溯
            i = i-j+1;  //i 退回至开始匹配的下一位置
            j = 0;      //j 退回首位
        }
    }
    if(j>=t.length()) //匹配时，j最终为 t.length()-1) + 1
        return i-j+1;
    else
        return 0;
}
