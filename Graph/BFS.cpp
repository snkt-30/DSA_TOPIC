#include"bits/stdc++.h"
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;
    vector<int> ar[v];
    for(int i=0;i<e;i++) 
    {
        int x,y;
        cin>>x>>y;

        ar[x].push_back(y);
        ar[y].push_back(x);
    }
    bool vis[v];

    queue<int> q;
    q.push(0);
    vis[0]=true;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();

        cout<<temp<<' ';
        for(auto x:ar[temp])
        {
            if(!vis[x])
            {
                vis[x]=true;
                q.push(x);
            }
        }
    }

}