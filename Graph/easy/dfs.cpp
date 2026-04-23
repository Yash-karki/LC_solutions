#include <bits/stdc++.h>
using namespace std;

void dfsgraph(vector<vector<int>> &adj, vector<int> &vis, vector<int> &res, int st){
    vis[st] = 1;
    res.push_back(st);
    for(int it : adj[st]){
        if(vis[it] == 0){
            dfsgraph(adj, vis, res, it);
        }
    }
}


vector<int> dfs(vector<vector<int>> &adj){
    int v = adj.size();
    vector<int> vis(v,0);
    vector<int> res;
    dfsgraph(adj,vis,res,0);
    return res;
}


void addEdge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int v = 5;
    vector<vector<int>> adj(v);

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);

    vector<int> res = dfs(adj);
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout<<endl;
    return 0;
    
}