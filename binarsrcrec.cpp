#include "bits/stdc++.h"
using namespace std;

vector<int> ar;

int binarySearch(vector<int>ar, int st, int end, int x)
{
    if (end >=st) {
        int mid = st + (end - st) / 2;
  
        // If the element is present at the middle
        // itself
        if (ar[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (ar[mid] > x)
            return binarySearch(ar, st, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(ar, mid + 1, end, x);
    }
  
    // We reach here when element is not
    // present in array
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