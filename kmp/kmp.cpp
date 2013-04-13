#include "kmp.h"

//一般的kmp算法求模式串匹配的位置，返回值下标从1开始计算
int kmp(const string& s, const string& t)
{
    int i(0),j(0);

    int* next = new int;
    GetNext(t,next);

    //思想同求next类似
    while(i<s.length() && j<(int)t.length()) //此处注意，t.length()返回的是无符型，而j=-1
    {
        if(j==-1 || s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }

    delete next;
    if(j>=t.length())
    {
        return i-j+1;
    }
    else
        return 0;
}


//求next[j]的函数，模式串下标从0开始
//将模式串划分出前缀与后缀两个子串，其中i从后缀子串前一位开始标记（此程序0），
//j从前缀子串前一位开始标记（此程序-1）；
//然后匹配模式串两字串中相等的串
void GetNext(const string& t, int *next)
{
    int j = -1;
    int i = 0;
    next[0] = -1;
    while(i<t.length()-1)
    {
        if( j==-1 || t[i]==t[j]) //字符匹配则继续，或j回溯至-1时
        {
            i++;
            j++;
            next[i] = j;
        }
        else
        {   //字符不等，则j值回溯
            j = next[j];
        }
    }

    /*此处为kmp便于计算，next[j]统一小1
    //下标从0开始计算next数组时，最中需要+1
    for(i=0; i<t.length(); i++)
    {
        next[i] = next[i]+1;
    }*/

}
