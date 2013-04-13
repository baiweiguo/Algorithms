#ifndef KMP_H_INCLUDED
#define KMP_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;
void GetNext(const string& t, int *next);//求next数组函数
int kmp(const string& s, const string& t);//kmp算法
#endif // KMP_H_INCLUDED
