#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int adj[n+1][n+1]={0};

    //n-nodes
    //m-edges

    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        adj[v1][v2]=1;
        adj[v2][v1]=1;
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    //space taken in O(n^2)


}

