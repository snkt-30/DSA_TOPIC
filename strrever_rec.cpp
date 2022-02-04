#include"bits/stdc++.h"
using namespace std;

void sol(string s)
{
    if(s.size()==0)
    {
        return;
    }

    sol(s.substr(1));

    cout<<s[0];
}
int main()
{
string s;
cin>>s;


sol(s);
}