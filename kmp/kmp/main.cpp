//naive pattern matching algorithm

#include <iostream>
using namespace std;
int NaiveMatch(const string &s, const string &t);


int main()
{
    string s("abcdefg");
    string t("de");
    cout<<NaiveMatch(s,t)<<endl;


    return 0;
}
int  NaiveMatch(const string &s, const string &t)
{
    int i(0),j(0);
    while( i<s.length() && j<t.length())
    {

        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i-j+1;
            j = 0;
        }
    }
    return i-j+1;

}
