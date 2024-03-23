//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int mod=1e9+7;
        vector<int>v;
        int a=0;
        if(n==0){
            return {0};
        }
        int b=1;
        if(n==1){
            return {0,1};
        }
        v.push_back(a);
        v.push_back(b);
        for(int i=2;i<=n;i++){
           int c=(a+b)%mod;
           a=b%mod;
           b=c%mod;
           v.push_back(c);
        }
        return v;
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

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends