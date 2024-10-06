//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>> &grid,vector<vector<char>>&vis){
        vis[i][j]='-1';
        int nrow[]={-1,-1,-1,0,1,1,1,0};
        int ncol[]={-1,0,1,1,1,0,-1,-1};
        for(int k=0;k<8;k++){
            int drow=nrow[k]+i;
            int dcol=ncol[k]+j;
            if(drow>=0 && drow<grid.size() && dcol>=0 && dcol<grid[0].size()
            && grid[drow][dcol]!='0' && vis[drow][dcol]=='0'){
                dfs(drow,dcol,grid,vis);
            }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        // using dfs
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<char>>vis(n,vector<char>(m,'0'));
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!='0' && vis[i][j]=='0'){
                    cnt++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends