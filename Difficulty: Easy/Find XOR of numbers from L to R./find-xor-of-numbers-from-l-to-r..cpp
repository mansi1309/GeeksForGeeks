//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fun(int num){
        if(num%4==1)
        return 1;
        if(num%4==2)
        return num+1;
        if(num%4==3)
        return 0;
        else
        return num;
    }
    int findXOR(int l, int r) {
        // complete the function here
        return fun(l-1)^fun(r);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends