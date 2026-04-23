#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj){
    int v = adj.size();
    vector<int> vis(v,0);
    vector<int> res;
    queue<int> q;
    int src = 0;
    vis[src] = 1;
    q.push(src);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        res.push_back(curr);
        for(int it : adj[curr]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return res;

}

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);

    vector<int> res = bfs(adj);

    for (int i : res)
        cout << i << " ";
}