#include"bits/stdc++.h"
using namespace std;

void lexico(int n,int i)
{
    if(i>n)
    {
     return;
    }
    cout<<i<<'\n';
    for(int j=(i==0)?1:0;j<=9;j++)
    {
        lexico(n,10*i+j);
    }

}

int main()
{
    lexico(1000,0);
}