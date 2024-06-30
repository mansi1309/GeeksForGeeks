//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void help(vector<int> arr, int i,int sum,vector<int>&v){
        if(i>=arr.size()){
            v.push_back(sum);
            return;
        }
        help(arr,i+1,sum+arr[i],v);
        help(arr,i+1,sum,v);
        
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        // int sum=0;
        vector<int>v;
        help(arr,0,0,v);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends