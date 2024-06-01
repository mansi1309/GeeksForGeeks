//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
// 	//Function to return list containing vertices in Topological order. 
// 	void dfs(int i,vector<int> adj[],vector<int>&vis,stack<int>&st){
// 	    vis[i]=1;
// 	    for(auto &it:adj[i]){
// 	        if(vis[it]==0){
// 	            dfs(it,adj,vis,st);
// 	        }
	        
// 	    }
// 	    st.push(i);
// 	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   // by dfs
	   // vector<int>vis(V,0);
	   // stack<int>st;
	   // for(int i=0;i<V;i++){
	   //     if(vis[i]==0){
	   //         dfs(i,adj,vis,st);
	   //     }
	   // }
	   // vector<int>res;
	   // while(!st.empty()){
	   //     res.push_back(st.top());
	   //     st.pop();
	   // }
	   // return res;
	   // }
	   
	   //by bfs
	   vector<int>indegree(V,0);
	   for(int i=0;i<V;i++){
	       for(auto &it:adj[i]){
	           indegree[it]++;
	       }
	   }
	   queue<int>q;
	   for(int i=0;i<V;i++){
	       if(indegree[i]==0){
	           q.push(i);
	       }
	   }
	   vector<int>topo;
	   while(!q.empty()){
	       int val=q.front();
	       q.pop();
	       topo.push_back(val);
	       	  for(auto &it:adj[val]){
	           indegree[it]--;
	           if(indegree[it]==0){
	               q.push(it);
	           }
	       }
	     
	       
	   }
	     return topo;
	}
	   
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends