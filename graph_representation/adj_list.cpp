#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(int v,vector<pair<int,int>>edges)
{
    vector<vector<int>>adj_list(v);
    for(const auto &it:edges)
    {
        int u=it.first;
        int v=it.second;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    return adj_list;
}

int main()
{
    int n,m;
    cin>>n>>m;

    
    //n-nodes
    //m-edges

    vector<pair<int,int>>edges;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        edges.push_back(make_pair(x,y));

    }

    vector<vector<int>>res=graph(n,edges);

    for(int i=0;i<n;i++)
    {
        cout<<"vertex "<< i <<" is connected to ";
        for(int j=0;j<res[i].size();i++)
        {
            cout<<" "<<res[i][j];
        }
        cout<<endl;
    }


    //space taken is O(2*m)
}