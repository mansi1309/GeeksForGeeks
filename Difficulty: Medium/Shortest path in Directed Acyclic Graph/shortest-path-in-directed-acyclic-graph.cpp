//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
  public:
     void topo(int node, vector<int> &vis, vector<pair<int,int>> adj[], stack<int> &st) {
         vis[node] = 1;

         // Check adjacent nodes
         for(auto it : adj[node]) {
            int v = it.first;
            if(vis[v] == 0) {
                topo(v, vis, adj, st);
            }
         }
         st.push(node);
     }

     vector<int> shortestPath(int N, int M, vector<vector<int>> &edges) {
        // Creating adjacency list
        vector<pair<int, int>> adj[N];
        for(int i = 0; i < M; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
        }

        vector<int> vis(N, 0);
        stack<int> st;
        for(int i = 0; i < N; i++) {
            if(vis[i] == 0) {
                topo(i, vis, adj, st);
            }
        }

        // Calculate distance
        vector<int> dist(N, 1e9);
        dist[0] = 0;

        while(!st.empty()) {
            int node = st.top();
            st.pop();

            if(dist[node] != 1e9) {
                for(auto it : adj[node]) {
                    int v = it.first;
                    int w = it.second;

                    if(dist[node] + w < dist[v]) {
                        dist[v] = dist[node] + w;
                    }
                }
            }
        }

        for(int i = 0; i < N; i++) {
            if(dist[i] == 1e9) {
                dist[i] = -1;
            }
        }

        return dist;
    }
};





//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends