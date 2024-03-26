//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool dfs(int index,int vis[],int path_vis[],vector<int> adj[]){
        vis[index]=1;
        path_vis[index]=1;
        
        //traverse all index adjacent nodes
        for(auto it:adj[index]){
            //if not visited
            if(vis[it]==0){
                if(dfs(it,vis,path_vis,adj)==true){
                    return true;
                }
            }
            // node is visited and its path alos visited that is on the same path whih means cycle exist
            else if(path_vis[it]==1){
                return true;
            }
        }
        // when going back the path visitied becomes 0 becayse it is not on the same path
        path_vis[index]=0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        // make 2 arrays vis and path vis
        int vis[V]={0};
        int path_vis[V]={0};
        
        // traverse fo all index and check wheather it is visited or not
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(i,vis,path_vis,adj)==true){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends