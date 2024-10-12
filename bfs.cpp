#include<bits/stdc++.h>
using namespace std;

vector<int>bfsOfGraph(int V, vector<int>adj[])
{
    vector<int>bfs;
    vector<int>vis(V,0);
    queue<int>q;
    q.push(0);
    vis[0]=1;

    while(!q.empty()){
        int node =q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it :adj[node])
        {
            if(!vis[it])
            q.push(it);
            vis[it]=1;
        }
    }

}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        //vertex and edge
        int V,E;
        cin>>"vertext and edge">>V>>E;


        //adjacency list;
        vector<int>adj[V];

        for(int i=0;i<E;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
         vector<int>ans = bfsOfGraph(V,adj);
         for(int i=0;i<ans.size();i++){
            cout<<ans[i];
         }
    }
    return 0;

  
}