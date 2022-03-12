#include"bits/stdc++.h"
using namespace std;

void ascii(int n,int i)
{
    if(i>n)
    {
        return ;
    }
   cout<<char(i)<<" "<<i<<endl;

   ascii(n,i+1);
}


int main(){

ascii(255,0);

}