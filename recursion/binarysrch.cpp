#include"bits/stdc++.h"
using namespace std;

vector<int> ar;

int binarysrch(vector<int>ar,int st,int end,int target)
{
    while(st<end)
    {
        int mid=(st+end)/2;
        if(ar[mid]==target)
        {
            return mid;
        }
        else if(ar[mid]<target)
        {
            st=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ar.push_back(x);
    }
    int target;
    cin>>target;

int ans=binarysrch(ar,0,n-1,target);

cout<<ans;

}