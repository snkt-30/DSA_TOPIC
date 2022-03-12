// Given a value n , count how many binary strings of length n are made with no consecutive one's;

#include"bits/stdc++.h"
using namespace std;

long long int ans(long long int  n) {
    if(n==1 || n==2) {
       
        return n+1;
    }
    return ans(n-1)+ans(n-2);
}
int main()
{
    long long int n;
    cin>>n;
cout<<ans(n);
}