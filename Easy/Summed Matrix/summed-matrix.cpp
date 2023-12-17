//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // // code here
        // long long cnt=0;
        // vector<int>v;
        // int y=2;
        // int k;
        // for(int i=0;i<n;i++)
        // {
        //     k=y;
        //     for(int j=0;j<n;j++)
        //     {
                
        //         v.push_back(k);
        //         if(k==q)
        //         {
        //             cnt++;
        //         }
        //         k++;
        //     }
        //     y++;
        // }
        // return cnt;
        
        
        // optimized approach
        if(q>2*n)
        return 0;
        else
        return n-abs(n+1-q);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends