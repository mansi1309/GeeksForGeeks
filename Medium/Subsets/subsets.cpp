//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  vector<vector<int>>res;
    void solve(vector<int>&a,int i,vector<int>&temp){
        // base case
        if(i>=a.size()){
            res.push_back(temp);
            return ;
        }
        // take ith
        temp.push_back(a[i]);
        solve(a,i+1,temp);
        // not take
        temp.pop_back();
        solve(a,i+1,temp);
    }
    vector<vector<int> > subsets(vector<int>& a) {
        // code here
        vector<int>temp;
        solve(a,0,temp);
        sort(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        vector<int> array;
        for (int i = 0; i < n; i++) {
            cin >> x;
            array.push_back(x);
        }

        Solution ob;
        vector<vector<int> > res = ob.subsets(array);

        // Print result
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
// } Driver Code Ends