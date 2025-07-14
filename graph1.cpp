#include<bits/stdc++.h>
using namespace std;


//adjacency matrix
int main()
{
    int vertex,edges;
    cin>>vertex>>edges;
    int u,v;
    vector<vector<bool> >AdjMar(vertex, vector<bool>(vertex,0));
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        AdjMar[u][v]=1;
        AdjMar[v][u]=1;

    }

  for(int i=0;i<vertex;i++)
  {
    for(int j=0;j<vertex;j++ )
    {
        cout<<AdjMar[i][j]<<" ";
    }
    cout<<endl;

  }
  return 0;
}