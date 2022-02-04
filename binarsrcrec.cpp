#include "bits/stdc++.h"
using namespace std;

vector<int> ar;

int binarySearch(vector<int>ar, int st, int end, int x)
{
    if (end >=st) {
        int mid = st + (end - st) / 2;
        if (ar[mid] == x)
            return mid;
        if (ar[mid] > x)
            return binarySearch(ar, st, mid - 1, x);
  
        return binarySearch(ar, mid + 1, end, x);
    }
  
   
    return -1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    int target;
    cin >> target;

  int ans=binarySearch(ar,0,n-1,target);
  cout<<ans;
}