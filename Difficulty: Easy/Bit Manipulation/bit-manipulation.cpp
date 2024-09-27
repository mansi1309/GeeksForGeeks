//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        
        // get ith bit
        int get_ith=num>>(i-1)&1;
        
        // set ith bit
        int set_ith=(num|(1<<(i-1)));
        
        // clear ith bit
        int clear_ith=(num&~(1<<(i-1)));
        
        cout<<get_ith<<" "<<set_ith<<" "<<clear_ith;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends