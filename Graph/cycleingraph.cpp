#include"bits/stdc++.h"
using namespace std;
bool iscycle(int src,vector<vector<int>> &edg,vector<bool> &vis,int parent)
{
    vis[src]=true;
    for(auto x:edg[src])
    {
        if(x!=parent)
        {
        if(vis[x])
        {
            return true;
        }
        if(!vis[x] and iscycle(x,edg,vis,src))
        {
            return true;
        }
        }
    }
    return false;
}


int main()
{
    int v,e;
    cin>>v>>e;

    vector<vector<int>> edg(v);

    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        edg[x].push_back(y);
        // edg[y].push_back(x);
    }

    bool cycle=false;

    vector<bool> vis(v,false);
    for(int i=1;i<v;i++)
    {
        if(!vis[i] and iscycle(i,edg,vis,-1))
        {
            cycle=true;
        }
    }

    if(!cycle)
    {
        cout<<"cycle is not present\n";
    }
    else
    {
        cout<<"cycle is present\n";
    }
}