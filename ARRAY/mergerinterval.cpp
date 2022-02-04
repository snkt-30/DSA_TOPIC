#include"bits/stdc++.h"
using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& ar) {
        vector<vector<int>>ans;
        
        sort(ar.begin(),ar.end());
        int index=0;
        for(int i=1;i<ar.size();i++)
        {
            if(ar[index][1]>=ar[i][0])
            {
                ar[index][1] = max(ar[index][1],ar[i][1]);
            }
            else
            {
                index++;
                ar[index]=ar[i];
            }
        }
        for(int i=0;i<=index;i++)
        {
            ans.push_back(ar[i]);
        }
        return ans;
        
        
    }

int main()
{
vector<vector<int>>que={{1,3},{2,6},{8,10},{15,18}};

vector<vector<int>>ans=merge(que);

for(auto x:ans)
{
    cout<<"["<<x[0]<<" "<<x[1]<<"]";
}
}