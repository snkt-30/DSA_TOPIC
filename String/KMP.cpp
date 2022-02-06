#include"bits/stdc++.h"
using namespace std;

void lpsfun(vector<int>&lps,int m,string pat)
{
    int len=0;
    int i=1;
    lps[0]=0;

    while(i<m)
    {
        if(pat[len]==pat[i])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }

        }
    }
}

void kmp(char* text,char* pat)
{
    int n=strlen(text);
    int m=strlen(pat);

    
    
}

int main()
{
    char text[]="aabbaaacca";
    char pat[]="aaacc";

    kmp(text,pat)

}