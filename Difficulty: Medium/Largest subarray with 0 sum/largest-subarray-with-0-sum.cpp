//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int,int>mp;
        int sum=0;
        int maxi=0;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,abs(mp[sum]-i));
            }
            else{
                mp[sum]=i;
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends