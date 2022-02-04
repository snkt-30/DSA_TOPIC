#include"bits/stdc++.h"
using namespace std;

void sol(int n)
{
 if(n==0)
{
    return;
}
cout<<n%10;
sol(n/10);

}
int main()
{
int n;
cin>>n;
sol(n);
}