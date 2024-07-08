//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int fib(int n,vector<long long int>&dp){
        long long int mod=1e9+7;
        if(n<=1){
            return n;
        }
        else if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=(fib(n-1,dp)+fib(n-2,dp))%mod;
        return dp[n];
    }
    long long int topDown(int n) {
        // code here
        // memoization-->start from problem to base case 
        // reduce the problem of overlapping
        // memoization ===recursion
         
        vector<long long int>dp(n+1,-1);
    return fib(n,dp);
        
    }
    long long int bottomUp(int n) {
        // code here
        // tabulation-->start from base case to problem
        // tabulation====table
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        long long int mod=1e9+7;
        vector<long long int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends