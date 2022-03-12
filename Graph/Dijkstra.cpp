#include"bits/stdc++.h"
using namespace std;

#define inf 1e5+2
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> dist(v+1,inf);

    vector<vector<pair<int,int>>> edges(v+1);

    for(int i=0;i<e;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        edges[x].push_back({y,w});
    }

int src;
cin>>src;
    set<pair<int,int>>s;
    s.insert({0,src});

    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);

        for(auto it:edges[x.second])
        {
            if(dist[it.first]>dist[x.second]+it.second);
            {
                s.erase({dist[it.first],it.first});

                dist[it.first]=dist[x.second]+it.second;

                s.insert({dist[it.first],it.first});
            }
        }
    }

   
   
        for(auto e:dist)
        {
            cout<<e<<' ';
        }
  
    


}