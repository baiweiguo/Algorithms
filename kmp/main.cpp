//naive pattern matching algorithm

#include "naive.h"
#include "kmp.h"


int main()
{

    string s("ababacg");
    string t("bac");
    cout<<NaiveMatch(s,t)<<endl;
    cout<<kmp(s,t)<<endl;

    return 0;
}


