//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(int n){
        if(n==1)
        {
            cout<<"GFG";
            return;

        }
        else
        {
            cout<<"GFG"<<" ";
            solve(n-1);
        }
    }
    void printGfg(int N) {
        // Code here
        solve(N);
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends